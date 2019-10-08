#include <iostream>
#include <vector> //including the vector class

using namespace std;

//template <class MYVECTOR>

void print_vector(vector<int> /*MYVECTOR*/ myVector) {
	cout << "We are in the print_vector function" << endl;
	for(unsigned int i = 0; i<myVector.size(); i++) {
		cout << myVector[i] << " ";
	} cout << endl;

}

int main()
{
	//declaration of vector
	vector<int> myVector;

	myVector.push_back(2);
	myVector.push_back(7);
	myVector.push_back(4);
	myVector.push_back(1);
	myVector.push_back(3);

	print_vector(myVector);

	for(unsigned int i = 0; i<myVector.size(); i++) {
		cout << myVector.at(i) << " ";
	} cout << endl;

	cout << myVector.empty() << endl;

	cout << myVector.size() << endl;
	//cout << myVector.at(5) << endl; //gives error, index out of bound
	cout << myVector.at(4) << endl; //returns the last element
	cout << myVector[4] << endl; // same as myVector.at(4)

	myVector.insert(myVector.begin()+3, 0); //inserting 0 before the third element

	for(unsigned int i = 0; i<myVector.size(); i++) {
		cout << myVector.at(i) << " ";
	} cout << endl;

	myVector.erase(myVector.begin() + 3); //erase element at 3rd position

	for(unsigned int i = 0; i<myVector.size(); i++) {
		cout << myVector.at(i) << " ";
	} cout << endl;

	myVector.clear(); //clears the entire vector

	for(unsigned int i = 0; i<myVector.size(); i++) {
		cout << myVector.at(i) << " ";
	} cout << endl;

	bool isEmpty = myVector.empty(); // finds whether the vector is empty

	cout << isEmpty << endl;




	return 0;
}