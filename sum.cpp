#include <iostream>

using namespace std;

int main() 
{
	cout << "Enter a number: ";
	double num;
	cin >> num;
	double sum = 0;

	for(int i=1; i<=num; i++) {
		sum = sum + 1/i;
	}
	cout << "The sum is: " << sum << endl;


	return 0;
}