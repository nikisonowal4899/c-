#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "Enter a Number: " ;
	cin >> number;

	int remainder;

	remainder = number%2;

	if(remainder == 0) {
		cout << "The given Number is Even" << endl;
	} else {
		cout << "The Number is Odd" << endl;
	}


	

	return 0;
}