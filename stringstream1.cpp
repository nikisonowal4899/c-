#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() 
{
	stringstream ss;

	ss << "11,12,13";
	int a,b,c;
	char c1;
	 ss >> a >> c1 >> b >> c1 >> c >> c1;

	 cout << a << " " << b << " " << c << endl; 


	return 0;
}