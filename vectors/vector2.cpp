#include <iostream>
#include <vector>

using namespace std;

void fillvector(std::vector<int>& myNew_vector) {
	cout << "Type in a list of integers (-1 to stop): ";

	int input;
	cin >> input;

	while(input != -1) {
		myNew_vector.push_back(input);
		cin >> input;
	}
	cout << endl;
	cout << "The vector is filled now\n";
}

void print_vector(const std::vector<int>& myVector) {
	for(unsigned int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << " ";
	}
	cout << endl;
}

int main()
{
	std::vector<int> myVector;

	fillvector(myVector);
	print_vector(myVector);



	return 0;
}