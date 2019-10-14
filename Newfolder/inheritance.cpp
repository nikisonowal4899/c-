#include <iostream>
#include <string>

using namespace std;

class Mother {
public:
	Mother() {

	}
	void sayName() {
		cout << "We are sonowal" << endl;
	}

};

//inherited from mother
class Daughter: public Mother{
public:
	Daughter() {

	}
	void sayHii() {
		cout << "Hello World!" << endl;
	}
	void sayName() {
		cout << "Hahaha" << endl;
	}

};

int main()
{
	Mother mom;
	mom.sayName();

	Daughter barbie;
	barbie.sayName();
	barbie.sayHii();




	return 0;
}