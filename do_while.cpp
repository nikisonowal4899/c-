#include <iostream>
using namespace std;

int main()
{
	char input;

	do{
		cout << "Hello World!\n";
		cout << "Enter x to Exit or any other key to see this Messsage again\n";
		cin >> input;
	} while(input != 'x');

	return 0;
}