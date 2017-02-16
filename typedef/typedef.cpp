#include <iostream>
using namespace std;

typedef struct {
	string name;
	string dorm;
} student;

int main() {
	student Peter, * ptr_Peter;
	Peter.name = "Peter";
	Peter.dorm = "#2223";

	cout << Peter.name << " " << Peter.dorm << endl;

	return 0;
}
