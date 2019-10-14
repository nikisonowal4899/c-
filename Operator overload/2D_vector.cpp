#include <iostream>
#include <vector>

using namespace std;

class Matrix {
public:
	vector<vector<int>> vec;

	Matrix operator+ (const Matrix& y);
};

//Operator overload function
Matrix Matrix::operator+ (const Matrix& y) {
	Matrix out;
	int n;
	vector <int> row;

	for(int i=0; i<vec.size(); i++) {
		for(int j=0; j<vec[i].size(); j++) {
			//sum 
			n = vec[i][j] + y.vec[i][j];
			row.push_back(n);
		}
		out.vec.push_back(row);
		row.clear();
	}
	return out;
}

int main()
{
	vector <vector<int>> vector1, vector2; //declaring a 2D vector

	vector1 = {
		{1,2,3,4},
		{2,4,6,8},
		{3,6,9,7}
	};

	vector2 = {
		{2,0,4,8},
		{1,0,5,9},
		{7,1,3,2}
	};

	Matrix x, y;

	x.vec.push_back(vector1[0]);
	x.vec.push_back(vector1[1]);
	x.vec.push_back(vector1[2]);

	y.vec.push_back(vector2[0]);
	y.vec.push_back(vector2[1]);
	y.vec.push_back(vector2[2]);

	cout << "Vector A" << endl;
	for(unsigned int i=0; i<x.vec.size(); i++) {
		for(unsigned int j=0; j<x.vec[i].size(); j++) {
			cout << x.vec[i][j] << " ";
		} cout << endl;
	} cout << endl;

	cout << "Vector B" << endl;
	for(unsigned int i=0; i<y.vec.size(); i++) {
		for(unsigned int j=0; j<y.vec[i].size(); j++) {
			cout << y.vec[i][j] << " ";
		} cout << endl;
	} cout << endl;


	Matrix z = x + y;

	cout << "Vector C" << endl;
	for(unsigned int i=0; i<z.vec.size(); i++) {
		for(unsigned int j=0; j<z.vec[i].size(); j++) {
			cout << z.vec[i][j] << " ";
		} cout << endl;
	}


	return 0;
}