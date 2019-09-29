#include <iostream>
using namespace std;

int main()
{

	int num;
	cout << "Enter n: ";
	cin >> num;

	int array[num];
	cout << "Enter the values: ";

	for(int i=0; i< num; i++)
	{
		cin >> array[i];
	}

	cout << "Printing the values: ";

	for(int i=0; i<num; i++)
	{
		cout << array[i] << " ";
	}

	return 0;
}