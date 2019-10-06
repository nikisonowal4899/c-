#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string sentence = "", temp;

	cout << "Enter a sentence: ";

	while(cin.get() != '\n') {
		cin >> temp;
		sentence = sentence + " " + temp;
	}

 	cout << sentence << endl;


	return 0;
}