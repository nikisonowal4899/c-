#include <iostream>
using namespace std;

struct student { //Defining the structure
	int rollNo;
	char sex;
};

void detail(struct student *ptr);

int main()
{
	struct student Niki;
	struct student *ptr;
	ptr = &Niki;

	Niki.rollNo = 170108026;
	Niki.sex = 'M';

	detail(ptr);


	return 0;
}

void detail(struct student *ptr) {
	cout << "Roll Number: " << ptr->rollNo << endl;
	cout << "Sex: " << ptr->sex << endl;
	cout << "------------x------------" << endl;
}