#include <iostream>
#include <string>

using namespace std;

class Person {
private: //class variables should be kept private
	string name;
public:
	Person() { //a constructor
		cout << "Hello there, a class is created\n";
		cout << "Enter your name: ";
	}

	void setName(string x) {
		name = x;
	}

	string getName() {
		return name;
	}

};

int main()
{
	Person niki; //declaring a 'niki' object
	string FirstName, LastName, name;
	cin >> FirstName >> LastName;
	name = FirstName + " " + LastName;

	niki.setName(name);
	cout << "So your name is " << niki.getName() << endl;



	return 0;
}