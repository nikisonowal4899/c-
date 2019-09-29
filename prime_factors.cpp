#include <iostream>
using namespace std;

bool prime_detect(int num) {

	for(int i = 2; i < num; i++) {
		if(num%i == 0) return false;
	}

	return true;

}

int main() 
{
	cout << "Program to find the prime factors of a number\n";
	cout << "Enter the number: ";
	int num;
	cin >> num;
	bool prime;

	for(int divisor = 1; divisor < num; divisor++) {

		if(num%divisor == 0) {
			prime = prime_detect(divisor);
			if(prime == true) cout << divisor << " ";
		}
	}

	cout << "\n";

	return 0;
}