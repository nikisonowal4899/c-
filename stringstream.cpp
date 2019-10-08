#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() 
{
	vector <int> vec;
	stringstream ss;

	ss << "11,12,13,14,56";

	char temp, temp2;
	int k;

	while(ss >> k >> temp2) {
		vec.push_back(k);
	}
	ss >> k;
	vec.push_back(k);

	for(unsigned int i = 0; i< vec.size(); i++) {
		cout << vec[i] << " ";
	}
	
	/*cout << endl;

	char char1 = '1';
	int int1 = char1 - '0';

	cout << char1 << " " << int1 + 1 << endl;*/


	return 0;
}