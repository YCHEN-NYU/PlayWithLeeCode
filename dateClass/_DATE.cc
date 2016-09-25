#include "_DATE.h"
#include "iostream"
using namespace std;

void date::SET_DATE(){
	cout << "\nyear: ";
	cin >> year;
	cout << "\nmonth: ";
	cin >> month;
	cout << "\ndate: ";
	cin >> date;
}

void date::GET_DATE(){
	cout << year << "/" << month << "/" << date << endl;

}
