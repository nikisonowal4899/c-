#include <iostream>
using namespace std;

void function(int num) {
	cout << "You have enterred an integer!, i.e,: " << num << endl; 
}

void function(double num) {
	cout << "You have enterred a decimal number!, i.e,: " << num << endl;
}

int main()
{
	function(78);
	function(12.0);
	function(12.1154);

	return 0;

}