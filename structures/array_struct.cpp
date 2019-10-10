#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop {
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops {
    int n; //No. of workshop signed up
    struct Workshop* workshop_ptr; //pointer to Workshop array
};

//initialise function
Available_Workshops* initialize (int start_time[], int duration[], int n) {
    struct Available_Workshops* ptr_available_workshop = new Available_Workshops;

    ptr_available_workshop->n = n;
    ptr_available_workshop->workshop_ptr = new Workshop[n];

    for(int i=0; i<n; i++) {
        ptr_available_workshop->workshop_ptr[i].start_time = start_time[i];
        ptr_available_workshop->workshop_ptr[i].duration = duration[i];
    }
    return ptr_available_workshop;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
	/*Returns the maximum number of workshops the student can attend—without overlap. The next workshop cannot 
	be attended until the previous workshop ends.*/
    
    int number_of_workshop = ptr->n;
    int current_endTime, current_startTime, current_duration;
    int nextStartTime, nextEndTime;
    int count=1;

    //calculate the ending times;
    
    for(int i=0; i<number_of_workshop; i++) {
    	current_endTime = ptr->workshop_ptr[i].start_time + ptr->workshop_ptr[i].duration;
    	ptr->workshop_ptr[i].end_time = current_endTime;
    }

    cout << "\nEnding Times\n";
    //print end Times
    for(int i=0; i<number_of_workshop; i++) {
    	cout << ptr->workshop_ptr[i].end_time << " " ;
    } cout << endl;

    bool changeCurrent = 1;

    for(int i=0; i<number_of_workshop; i++) {

    	if(changeCurrent) {
    		current_startTime = ptr->workshop_ptr[i].start_time;
    		current_endTime = ptr->workshop_ptr[i].end_time;
    	}
    	

    	if(i+1<number_of_workshop) {
    		nextStartTime = ptr->workshop_ptr[i+1].start_time;

    		if(nextStartTime >= current_endTime) {
    			//can attend, same half
    			count++;
    			changeCurrent = 1;
    		} else if((nextStartTime>=1 && nextStartTime<=6) && (current_endTime<=12 && current_endTime>6) && (nextStartTime<=current_endTime)){
    			//attend the afternoon
    			count++;
    			changeCurrent = 1;
    		} else if((nextStartTime>=1 && nextStartTime<6) && (current_endTime>=1 && current_endTime>6) && (nextStartTime>current_endTime)) {
    			//attend on the same half
    			count++;
    			changeCurrent = 1;
    		} else if() {

    		} else if(nextStartTime == 0) {
    			//can attend
    			count++;
    			changeCurrent = 1;
    		}
    	}
    }


    return count;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
