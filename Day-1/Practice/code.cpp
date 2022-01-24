#include <iostream>
using namespace std;

int main() 
{
    int num[5];
    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 5; ++i) 
    {
        cin >> num[i];
    }

    cout << "\nThe numbers are: ";
    for (int i = 0; i < 5; ++i) 
    {
        cout << num[i] << "  ";
    }
    return 0;
}
//------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() 
{
    int num[2][3];

    cout << "Enter 6 numbers: " << endl;
    for (int i = 0; i < 2; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cin >> num[i][j];
        }
    }

    cout << "The numbers are: " << endl;
    for (int i = 0; i < 2; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cout << "numbers[" << i << "][" << j << "]: " << num[i][j] << endl;
        }
    }
    return 0;
}
//------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1; 
    head->next = second; 
    second->data = 2;
    second->next = third;
    third->data = 3; 
    third->next = NULL;
    return 0;
}
