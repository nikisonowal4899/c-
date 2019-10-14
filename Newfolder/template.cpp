#include <iostream>
#include <vector>
using namespace std;

void func1(vector<int> &vec) { //changes the 'myVector'
	vec.push_back(20);
}

void func2(vector<int> vec) { //does not changes the 'myVector'
	vec.push_back(12);
}

template <class T>
void print_vector(T data) {
	for(unsigned int i=0; i<data.size(); i++) {
		cout << data[i] << " ";
	} cout << endl;
}

int main()
{
	vector<int> myVector;

	for(unsigned int i=0; i<10; i++) {
		myVector.push_back(i);
	}

	print_vector(myVector);
	func1(myVector);
	print_vector(myVector);
	func2(myVector);
	print_vector(myVector);


	return 0;
}