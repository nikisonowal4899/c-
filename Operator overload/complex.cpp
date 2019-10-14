#include <iostream>

using namespace std;

class Complex {
private:
	double real;
	double imaginary;
public:
	//constructor
	Complex() {
		real = 0;
		imaginary = 0;
	}
	Complex(int re, int im) {
		real = re;
		imaginary = im;
	}
	Complex(const Complex& C1) {
		real = C1.real;
		imaginary = C1.imaginary;
	}

	//Overload +
	Complex operator+ (const Complex& C) {
		Complex temp;
		temp.real = real + C.real;
		temp.imaginary = imaginary + C.imaginary;

		return temp;
	}

	//overload << 
	friend ostream& operator<< (ostream& out, Complex& C);
	
};

ostream& operator<< (ostream& out, Complex& C) {
	out << C.real << " + "<< C.imaginary << "i" << endl;
	return out;
}

int main()
{
	Complex c1;
	Complex c2(2,3);
	Complex c3(4,5);
	Complex c4(c3);

	Complex c5;
	c5 = c2 + c3;

	cout << c1;
	cout << c2 << "+" << c3;
	cout << "_______________"<< endl;
 	cout << c5;

	return 0;
}