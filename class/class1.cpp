#include <iostream>
using namespace std;

class students {

//Acces specifier, public
public: 

	//Data Members
	string FirstName, LastName;
	int age;
	float CGPA;

	//Member function
	void showDetails() {
			cout << "Details of the student" << endl;
			cout << "Name: " << FirstName << " " << LastName << endl;
			cout << "Age of " << FirstName << ": " << age << endl;
			cout << "Current CGPA is : " << CGPA << endl;
	}
};

int main()
{
	students student1; //Declaring an Object, student1

	cout << "Enter First Name: ";
	cin >> student1.FirstName;

	cout << "Enter Last Name: ";
	cin >> student1.LastName;

	cout << "Enter age: ";
	cin >> student1.age;

	cout << "Enter your CGPA: ";
	cin >> student1.CGPA;

	cout << endl;
	student1.showDetails();
	cout << endl;


	return 0;
}