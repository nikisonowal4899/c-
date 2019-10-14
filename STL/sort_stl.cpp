#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric> //for accumulate operation

using namespace std;

void show(int *arr, int size) {
	cout << "Array: ";
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	} cout << endl;
}

void show(const vector<int> &vec) {
	cout << "Vector: ";
	for(int i=0; i<vec.size(); i++) {
		cout << vec[i] << " ";
	} cout << endl;
}

int main()
{
	int arr[] = {9,8,7,4,5,6,3,2,1,0};
	int size = sizeof(arr)/sizeof(arr[0]);
	vector<int> vec(arr, arr+size); //initialize vector with array

 	show(arr, size);
 	sort(arr, arr+size);
 	show(arr, size);

 	//sort in decending order
 	sort(arr, arr+size, greater<int>());
 	show(arr, size);

 	//with vector
 	show(vec);

 	//sorting the vector
 	sort(vec.begin(), vec.end());
 	show(vec);

 	//reverse a vector
 	cout << "Reversed ";
 	reverse(vec.begin(), vec.end());
 	show(vec);

 	//maximum element
 	cout << "Max of vector is: " << *max_element(vec.begin(), vec.end()) << endl;

 	//sum of the vector
 	int sum = 0;
 	sum = accumulate(vec.begin(), vec.end(), sum);
 	cout << "Sum: " << sum << endl;

	return 0;
}