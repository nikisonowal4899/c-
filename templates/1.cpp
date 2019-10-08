#include <iostream>
using namespace std;

template <typename DATA>

DATA myMax(DATA x, DATA y) {
	return ((x>y)? x:y);
}

int main()
{
	cout << myMax(3,7) << endl;
	cout << myMax('a', 'c') << endl;
	cout << myMax(45.23222, 94.15547) << endl;

	return 0;
}