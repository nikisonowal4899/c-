#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, input;
	cout << "Enter N: ";
	cin >> N;
	vector<int> myVector;

	for (int i = 0; i < N; ++i)
	{
		cin >> input;
		myVector.push_back(input);
	}

	cout << "Vector contains: ";
	for(int i=0; i<myVector.size(); i++) {
		cout << myVector[i] << " ";
	} cout << endl;

	std::vector<int>::iterator low1, low2;

	cout << "Enter a Number: ";
	int num;
	cin >> num;
	low1 = lower_bound(myVector.begin(), myVector.end(), num);

	cout << low1 - myVector.begin() << endl;


	return 0;
}