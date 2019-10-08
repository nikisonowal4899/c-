#include <iostream>
using namespace std;

template <class generic>

generic addNumbers(generic x, generic y) {
	return x+y;
}

int main() 
{
	double x = 3.667, y = 5.1255;

	cout << addNumbers(x,y) << endl;;

	int a = 4, b = 56;

	cout << addNumbers(a,b) << endl;




	return 0;
}