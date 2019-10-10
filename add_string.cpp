#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() 
{
	stringstream ss;
	string str1, str2;
	cin >> str1;
	cin >> str2;
	ss << str1 << str2;
	string str;
	ss >> str;
	cout << str1 << " 1" << endl;
	cout << str2 << " 2" << endl;
	cout << str << " Final" << endl;





	return 0;
}