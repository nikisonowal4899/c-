#include <iostream>
using namespace std;

class marks {
private:
	int intmarks;
	int extmarks;
public:
	//constructor
	marks(int a, int b) {
		intmarks = a;
		extmarks = b;
	}
	marks() {
		intmarks = 0;
		extmarks = 0;
	}

	void display() {
		cout << intmarks << " " << extmarks << endl;
	}

	//operator overloading
	marks operator + (marks m) {
		marks temp;
		temp.intmarks = intmarks + m.intmarks; 
		temp.extmarks = extmarks + m.extmarks;
		return temp;
	}


};

int main()
{
	marks st1(10, 56), st2(20, 15); st1.display(); st2.display();
	marks st3;
	st3 = st1 + st2;
	st3.display();



	return 0;
}