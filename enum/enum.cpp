// Play with numeration for MonthOfYear and DayOfWeek
#include <iostream>
using namespace std;

enum DayOfWeek{Mon, Tu, Wed, Thr, Fri, Sat, Sun}; 
enum MonthOfYear {Jan, Feb, Mar, Apr, May, Jun,\
       	Jul, Aug, Sep, Oct, Nov, Dec};

int main(){
	MonthOfYear month[2];
        month[0] = Dec;
	month[1] = Jan;
	int diffMonth = month[0] - month[1];
	cout << "Month Difference = " << diffMonth << endl;	
}
