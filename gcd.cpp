//Finding GCD of two numbers using Euclid's algorithm
#include <iostream>
using namespace std;

void euclid(int *ptr1, int *ptr2) {

	if(*ptr1 > *ptr2) {
		*ptr1 = *ptr1 - *ptr2;
	} else *ptr2 = *ptr2 - *ptr1;

}

int main()
{
	int num1, num2;
	int *ptr1 = &num1, *ptr2 = &num2;

	cout << "Finding GCD of two numbers using Euclid's algorithm\n" << endl;
  	cout << "Enter two Numbers to find GCD: ";
  	cin >> num1 >> num2;

  	//If the two numbers are equal than the number themselves are the GCD
  	if(num1 == num2) {
  		cout << num2 << endl;
  		return 0;
  	}

  	while(num1 != num2) {

  		euclid(ptr1, ptr2);

  	}

  	cout << "GCD is "<< num2 << endl;

	return 0;
}