#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Name: ";
	string name;
	//cin >> name;
	getline(cin, name); //to read strings with white spaces
	
	cout << name << endl;
	cout << name.size() << endl; //prints the size of the string
	cout << name.length() << endl; //prints the size/length of the string


	return 0;
}