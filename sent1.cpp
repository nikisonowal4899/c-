#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter a line: " ;
	char str[100];
	cin.get(str, 100);

	cout << "You entered: " << str << endl;


	return 0;
}