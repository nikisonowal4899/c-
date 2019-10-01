#include <iostream>
using namespace std;

int main()
{
	cout << "Enter size of array: ";
	int n;
	cin >> n;
	int *pointer = new int[n];

	cout << "Enter Elements: ";
	for(int i=0; i<n; i++) {
		cin >> *(pointer + i); //Taking inputs
	}

	cout << endl << "Elements are: ";
	for(int i=0; i<n; i++) {
		cout << *(pointer+i) << " ";
	}

	cout << "\n";



	return 0;
}