#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> intVector;
	cout << sizeof(intVector) << endl;; //it's always 24; dammn!

	intVector.push_back(5); cout << sizeof(intVector) << endl;
	intVector.push_back(7); cout << sizeof(intVector) << endl;

	cout << "Size of int: " << sizeof(int) << endl;

	return 0;
}