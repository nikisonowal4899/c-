#include <iostream>
using namespace std;

dtemplate <class FIRST, class SECOND>

SECOND smaller(FIRST x, SECOND y) {
	return (x<y? x:y);
}

int main()
{
	int a = 89;
	double b = 78.996;

	cout << smaller(a,b) << endl;

	return 0;
}

/*template <class First, class Second>

double smaller(First x, Second y) {
	return (x<y? x:y);
}

int main()
{
	cout << smaller(94, 56.789) << endl;
	return 0;
}*/