//finding GCD of multiple numbers
// gcd(a, b, c) = gcd(a, gcd(b, c))
#include <iostream>
using namespace std;

int euclid(int num1, int num2) {
	if(num1 == num2) return num1;
	else if(num1 > num2) euclid(num1-num2, num2);
	else if(num1 < num2) euclid(num2-num1, num1);
}

int main()
{
	cout << "Finding GCD of multiple numbers" << endl;
	cout << "Enter how many numbers: "; 
	int n;
	cin >> n;
	int array[n];

	cout << "Enter the Numbers: ";

	for(int i=0; i<n; i++) {
		cin >> array[i];
	}

	int gcd = array[0];
	
	for(int i = 0; i < n; i++) {
		gcd = euclid(gcd, array[i]);
	}

	cout << endl;
	cout << "GCD of the given numbers is " << gcd << endl;
	

	return 0;
}