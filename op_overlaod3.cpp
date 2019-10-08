#include <iostream>
using namespace std;

class Box {
private:
	int l, b, h;
public:
	//default constructor
	Box() {
		l = 0;
		b = 0;
		h = 0;
	}
	//passed parameter constructor
	Box(int length, int breadth, int height) {
		l = length;
		b = breadth;
		h = height;
	}
	//passed a Box object as a parameter
	Box(const Box& newBox) {
		l = newBox.l;
		b = newBox.b;
		h = newBox.h;
	}

	void show_dimensions() {
		cout << "Lenght: " << l << endl;
		cout << "Breadth: " << b << endl;
		cout << "Height: " << h << endl << endl;
	}

	void set_length(int length) {
		l = length;
	}
	void set_breadth(int breadth) {
		b = breadth;
	}
	void set_height(int height) {
		h = height;
	}

	int get_length() {
		return l;
	}
	int get_breadth() {
		return b;
	}
	int get_height() {
		return h;
	}

	//operator overloading function
	Box operator + (Box b1) {
		Box temp_box; //Declaring a temporary box

		temp_box.l = l + b1.l ;
		temp_box.b = b + b1.b;
		temp_box.h = h + b1.h;

		return temp_box;
	}

	friend ostream& operator << (ostream&, const Box& the_box);

};

ostream& operator << (ostream& os, const Box& the_box) {
	os << the_box.l << " " << the_box.b << " " << the_box.h << endl;
	return os;
}

int main()
{
	Box box1, box2(1,2,3), box4(5,6,7);

	box2.show_dimensions();
	box1.show_dimensions();

 	Box box3(box2);

 	box3.show_dimensions();

 	Box big_box;

 	big_box = box2 + box4; //Overloading the '+' operator

 	box4.show_dimensions();

 	big_box.show_dimensions();

 	cout << box4;
	


	return 0;
}