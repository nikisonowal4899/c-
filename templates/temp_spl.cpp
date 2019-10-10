#include <iostream>

using namespace std;

template <class Numeric_data>
class MyClass
{
public:
	MyClass() {

	}
	//constructor
	MyClass(Numeric_data x) {
		element = x;
	}
	//a function
	Numeric_data show() {
		return element;
	}
	
private:
	Numeric_data element;
	
};

int main()
{
	MyClass <int>obj1(1);




	return 0;
}