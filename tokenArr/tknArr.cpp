#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include "strtk.hpp" 
#include <algorithm>
using namespace std;

int main(){
	string strArr = "1a 2 3 4 5";
	vector<int> intList;
	strtk::parse(strArr, " ", intList);

	vector<int>::iterator itList;
	for(itList = intList.begin();itList < intList.end(); ++itList){
		cout << "Index = " << distance(intList.begin(), itList);
	        cout << "\t Value = " << *itList << endl;	
	}	

}

