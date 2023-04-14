#include <iostream>
using namespace std;

int arr[20]; // array to be searched
int n;
int i;

void input()
{
	while (true)
	{
		cout << "enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 element. \n\n";
	}
	cout << "\n-----------------\n";
	cout << "enter array element\n";
	cout << "-------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void linearSearch()
{
	char ch;
	int comparation; //number of comparation

