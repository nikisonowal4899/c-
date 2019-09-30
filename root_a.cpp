#include <iostream>
using namespace std;

int main() 
{
	double y = 1;
	double x = 9.455;

	cout << "Program to find the root of a number" << endl;
	cout << "Enter the Number: ";
	cin >> x;

	for(int i = 1; i < 100000; i++) {
		y = (y + (x/y))/2;
	}
	cout << y << endl;


	return 0;
}