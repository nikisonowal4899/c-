#include <iostream>

using namespace std;

class Date {
private:
	int day;
	int month;
	int year;
public:
	//constructor
	Date() { /*Default*/
		day = 1;
		month = 1;
		year = 1900;
	}
	Date(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
	}
	Date(const Date& date_obj) { /*It is important to note that 'const' , '&' are needed to use and 'get function' are no need to use*/
		day = date_obj.day;
		month = date_obj.month;
		year = date_obj.year;
	}

	//set functions
	void set_day(int d);
	void set_month(int m);
	void set_year(int y);

	//get functions
	int get_day();
	int get_month();
	int get_year();

};

ostream& operator << (ostream& out, Date& date_obj) {
	out << date_obj.get_day() << "/ " << date_obj.get_month() << "/ " << date_obj.get_year() << " Used operator overloading" << endl;
	return out;
}

void Date::set_day(int d) {day = d;}
void Date::set_month(int m) {month = m;}
void Date::set_year(int y) {year = y;}

int Date:: get_day() {return day;}
int Date:: get_month() {return month;}
int Date::get_year() {return year;}

int main()
{

	Date date1;
	//a default date
	cout << date1.get_day() << "/ ";
	cout << date1.get_month() << "/ " ;
	cout << date1.get_year() << endl;

	//passing parameters
	Date date2(4,8,1998);
	cout << date2.get_day() << "/ ";
	cout << date2.get_month() << "/ " ;
	cout << date2.get_year() << endl;

	//passing Date object as a parameter
	Date date3(date2);
	cout << date3.get_day() << "/ ";
	cout << date3.get_month() << "/ " ;
	cout << date3.get_year() << endl;

	//overloading << operator
	cout << date2;

	return 0;
}