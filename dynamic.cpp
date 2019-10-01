#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int roll;
};

int main()
{
	struct student *ptr; //Declaring a pointer to structure
	ptr = new(struct student); //Allocating memory in Heap

	cout << "Enter Name: ";
	cin >> ptr->name;
	cout << "Enter Roll number: ";
	cin >> ptr->roll;

	cout << endl;

	cout << "Name: " << ptr->name << endl;
	cout << "Roll Number: " << ptr->roll << endl;



	return 0;
}