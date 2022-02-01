//--------------------------------------------------------------------------------------------
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

class Hash
{
	int bucket;
	list<int> *table;
public:
	Hash(int V); 
	void insertItem(int x);
	void deleteItem(int key);
	int hashFunction(int x) 
	{
		return (x % bucket);
	}
	void displayHash();
};
Hash::Hash(int b)
{
	this->bucket = b;
	table = new list<int>[bucket];
}
void Hash::insertItem(int key)
{
	int index = hashFunction(key);
	table[index].push_back(key);
}
void Hash::deleteItem(int key)
{
int index = hashFunction(key);
list <int> :: iterator i;
for (i = table[index].begin();
		i != table[index].end(); i++) 
		{
			if (*i == key)
			break;
		}
if (i != table[index].end())
	table[index].erase(i);
}
void Hash::displayHash() 
{
	for (int i = 0; i < bucket; i++) 
	{
		cout << i;
		for (auto x : table[i])
		cout << " --> " << x;
		cout << endl;
	}
}
int main()
{
int a[] = {15, 11, 27, 8, 12, 14};
int n = sizeof(a)/sizeof(a[0]);
Hash h(7); 
for (int i = 0; i < n; i++)
	h.insertItem(a[i]);
h.deleteItem(12);
h.displayHash();
return 0;
}

//----------------------------------------------------------------------------------------------------
// C++ program for insertion sort
#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr, n);
	printArray(arr, n);
	return 0;
}