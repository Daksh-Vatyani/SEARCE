//----------------------------------------------------------------------------------------
#include <iostream>
#include <stack>
using namespace std;
int main() 
{
	stack<int> s;
	s.push(21);
	s.push(22);
	s.push(24);
	s.push(25);
	
	s.pop();
	s.pop();

	while (!s.empty()) 
	{
		cout << ' ' << s.top();
		s.pop();
	}
}
//----------------------------------------------------------------------------------------
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
#define MAX_SIZE 100

int main() 
{
    int item, ch, i;
    int arr_queue[MAX_SIZE];
    int rear = 0;
    int front = 0;
    int exit = 1;

    do 
    {
        cout << "Queue operations";
        cout << "\n1.Insert \n2.Remove \n3.Display";
        cout << "\nEnter Your Choice : ";
        cin>>ch;
        switch (ch) 
        {
            case 1:
                if (rear == MAX_SIZE)
                    cout << "\nQueue Reached Max!!";
                else 
                {
                    cout << "\nEnter The Value to be Inserted : ";
                    cin>>item;
                    cout << "\nPosition : " << rear + 1 << " , Insert Value  : " << item;
                    arr_queue[rear++] = item;
                }
                break;
            case 2:
                if (front == rear)
                    cout << "\nQueue is Empty!";
                else 
                {
                    cout << "\nPosition : " << front << " , Remove Value  :" << arr_queue[front];
                    front++;
                }
                break;
            case 3:
                cout << "\nQueue Size : " << (rear - front);
                for (i = front; i < rear; i++)
                    cout << "\nPosition : " << i << " , Value  : " << arr_queue[i];
                break;
            default:
                exit = 0;
                break;
        }
    } 
    while (exit);
    return 0;
}