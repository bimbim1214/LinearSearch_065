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

	do
	{
		// accept the number to be search
		cout << "\nenter the element you want to search : "; //langkah 1
		int item;
		cin >> item;

		comparation = 0;
		for (i = 0; i < n; i++) // langkah 2, 3 dan 4
		{
			comparation++;
			if (arr[i] == item)
			{
				cout << "\n" << item << "found at position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n) //langkah 5B not found
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparation: " << comparation << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}


int main()
{
	input();
	linearSearch();
}