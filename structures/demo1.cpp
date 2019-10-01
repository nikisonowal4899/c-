#include <iostream>
using namespace std;

//Defining a structure
struct student {
	int rollNo;
	char sex;
};

int main() 
{
	struct student Niki; //Declaring a variable
	Niki.rollNo = 170108026;
	Niki.sex = 'M';

	cout << "Roll Number: " << Niki.rollNo << endl;
	cout << "Sex: " << Niki.sex << endl;



	return 0;
}