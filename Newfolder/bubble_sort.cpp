#include <iostream>

using namespace std;

void bubble_sort(int*, int n);
void swap(int*, int*);

int main()
{
	cout << "Enter how many Numbers: ";
	int n;
	cin >> n;
	int* array = new int[n];

	cout << "Enter the Numbers: ";

	for(unsigned int i=0; i<n; i++) {
		cin >> array[i];
	} 

	bubble_sort(array, n);

	cout << "Sorted array is: ";
	for(unsigned int i=0; i<n; i++) {
		cout << array[i] << " ";
	} cout << endl;

	return 0;
}

void bubble_sort(int* array, int n) {
	bool swapped = 1;

	while(swapped == 1) {
		swapped = 0;
		for(int i=0; i<n-1; i++) {
			if(array[i] > array[i+1]) {
				swapped = 1;
				swap(array+i, array+1+i);
			}
		}
	}
}

void swap(int* num1, int* num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}