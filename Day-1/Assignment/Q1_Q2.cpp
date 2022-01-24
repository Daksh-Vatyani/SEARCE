//Q1
#include<iostream>
#include<vector>
using namespace std;

int main()
{
int Q;
cin>>Q;
vector<int> P(Q);

for(int i=0;i<Q;i++)
{
    cin>>P[i];
}

for(int i = Q-1 ;i>=0;i--){
    cout<<P[i]<<" ";
}
return 0;
}

//Q2
#include <iostream>
using namespace std;
struct Node 
{
    int data;
    struct Node* next;
};
struct Node* head = NULL;

void insert(int new_data) 
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;

    if (head == NULL) 
    {
        head = new_node;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = new_node;
}
void display() 
{
    struct Node* ptr;
    ptr = head;
    while (ptr != NULL) 
    {
        cout << ptr->data << "\n";
        ptr = ptr->next;
    }
}
int main() 
{
    int p, a;
    cout<<"Enter number of entries to be inserted:";
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        insert(a);
    }
    display();
    return 0;
}