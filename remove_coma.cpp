#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

vector<int> parse_int(string str) {
	vector<int> myVector;
	stringstream ss;
	ss << str;

	char comma;
	int insert;

	while(ss >> insert >> comma) {
		myVector.push_back(insert);
	}
	ss >> insert;
	myVector.push_back(insert);

	return myVector;
}

int main()
{
	cout << "Enter Number with ',' between : ";
	string str;
	cin >> str;

	vector<int> vector_int;

	vector_int = parse_int(str);

	for(unsigned int i = 0; i < vector_int.size(); i++) {
		cout << vector_int[i] << " ";
	}
	cout << endl;

	return 0;
}