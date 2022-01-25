#include <iostream>
#include <stack>
using namespace std;
class Stack
{
    public:
        stack<int> s1;
        
        void pushstack();
        void popstack();
        void getMax();
};
void Stack::pushstack()
{
    int p;
    cout<<"Enter the value you want to push 1: "; //enter
    cin>>p;
    s1.push(p);
}
void Stack::popstack()
{
    cout<<"2: popped"; //pop
    if(s1.empty())
    {
        cout<<"Empty Stack";
    }
    else
    {
        s1.pop();
    }
    cout<<endl;
}
void Stack::getMax()
{
    cout<<"3: Max value"; //max
    if(s1.empty())
    {
        cout<<"Empty Stack";
    }
    else
    {
        stack<int> s(s1);
        int m = s.top(); 
        int a;
        while (!s.empty())
        {
            a = s.top();
            if (m < a)
                m = a;
            s.pop(); 
        }
        cout<<m<<endl;
    }
}
int main() 
{
    Stack s;
    int i;
    int n;
    cout<<"Enter the size of stack:";
    cin>>n;
    
    for(int k=0;k<n;k++)
    {
        cout<<"Enter operation you want to perform: ";
        cin>>i;
        if(i==1)
        {
            s.pushstack();
        }
        else if(i==2)
        {
            s.popstack();   
        }
        else if(i==3)
        {
            s.getMax();
        }
        else
        {
            break;
        }
    }
}