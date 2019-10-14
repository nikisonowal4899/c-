//virtual functions used

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//id counter 
int stud_id = 1;
int prof_id = 1;

class Person {
    public:
        string name;
        int age;
        virtual void getdata() {

        }
        virtual void putdata() {

        }
        
};
class Professor: public Person {
    private:
        int publication;
        int cur_id;
    public:
        Professor() {
            cur_id = prof_id;
            prof_id++;
        }
        void getdata() {
            cin >> name >> age >> publication;
        }
        void putdata() {
            cout << name << " " << age << " " << publication << " " << cur_id << endl;
        }
};
class Student: public Person {
    private:
        int cur_id;
        int marks[6];
        int total_marks;
    public:
        Student() {
            cur_id = stud_id;
            stud_id++;
            total_marks = 0;
        }
        void getdata() {
            cin >> name >> age;
            for(int i=0; i<6; i++) {
                int n;
                cin >> n;
                marks[i] = n;
            }
        }
        void putdata() {
            for(int i=0; i<6; i++) {
                total_marks = total_marks + marks[i];
            }
            cout << name << age << total_marks << cur_id << endl;
        }
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
