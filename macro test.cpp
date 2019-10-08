#include <iostream>
using namespace std;

#define MyMainFunction main
#define endofThis cout << "Function endling\n"

int MyMainFunction() 
{
	cout << "Hello world" << endl;
	endofThis;
	return 0;
}