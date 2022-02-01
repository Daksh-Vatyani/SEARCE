#include<iostream>
#include<stdio.h>
using namespace std;

const int Table_Size = 200;
class H_Table 
{
   public:
      int k;
      int v;
      H_Table(int k, int v) 
      {
         this->k= k;
         this->v = v;
      }
};
class H_M_Table 
{
   private:
      H_Table **t;
   public:
      H_M_Table() 
      {
         t = new H_Table * [Table_Size];
         for (int i = 0; i< Table_Size; i++) 
         {
            t[i] = NULL;
         }
      }
      int HashFunc(int k) 
      {
         return k % Table_Size;
      }
      void Insert(int k, int v) 
      {
         int h = HashFunc(k);
         while (t[h] != NULL && t[h]->k != k) 
         {
            h = HashFunc(h + 1);
         }
         if (t[h] != NULL)
            delete t[h];
         t[h] = new H_Table(k, v);
      }
      int SearchKey(int k) 
      {
         int h = HashFunc(k);
         while (t[h] != NULL && t[h]->k != k) 
         {
            h = HashFunc(h + 1);
         }
         if (t[h] == NULL)
            return -1;
         else
            return t[h]->v;
      }
      void Remove(int k) 
      {
         int h = HashFunc(k);
         while (t[h] != NULL) 
         {
            if (t[h]->k == k)
               break;
            h = HashFunc(h + 1);
         }
         if (t[h] == NULL) 
         {
            cout<<"No Element found at key "<<k<<endl;
            return;
         } 
         else 
         {
            delete t[h];
         }
         cout<<"Element Deleted"<<endl;
      }
      ~H_M_Table() 
      {
         for (int i = 0; i < Table_Size; i++) 
         {
            if (t[i] != NULL)
               delete t[i];
               delete[] t;
         }
      }
};
int main() 
{
   H_M_Table hash;
   int k, v;
   int c;
   while (1) 
   {
      cout<<"1.Insert element into the table"<<endl;
      cout<<"2.Search element from the key"<<endl;
      cout<<"3.Delete element at a key"<<endl;
      cout<<"4.Exit"<<endl;
      cout<<"Enter your choice: ";
      cin>>c;
      switch(c) 
      {
         case 1:
            cout<<"Enter element to be inserted: ";
            cin>>v;
            cout<<"Enter key at which element to be inserted: ";
            cin>>k;
            hash.Insert(k, v);
         break;
         case 2:
            cout<<"Enter key of the element to be searched: ";
            cin>>k;
            if (hash.SearchKey(k) == -1) 
            {
               cout<<"No element found at key "<<k<<endl;
               continue;
            } 
            else 
            {
               cout<<"Element at key "<<k<<" : ";
               cout<<hash.SearchKey(k)<<endl;
            }
         break;
         case 3:
            cout<<"Enter key of the element to be deleted: ";
            cin>>k;
            hash.Remove(k);
         break;
         case 4:
            exit(1);
         default:
            cout<<"\nEnter correct option\n";
      }
   }
   return 0;
}