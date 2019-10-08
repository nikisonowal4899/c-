#include <iostream>
using namespace std ;

template <class niks> //this is so good

void print_array(niks ptr) {

	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			cout << *(*(ptr+i) + j) << " ";
		}
		cout << "  um" << endl;
	}
}

int main() 
{
	int array[3][4] = {{1,2,3,4}, {2,4,6,8}, {3,6,7,0}};

	print_array(array);

	return 0;
}