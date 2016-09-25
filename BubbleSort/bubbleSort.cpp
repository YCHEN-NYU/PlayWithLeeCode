#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>
#include "strtk.hpp"
using namespace std;


int main(){
	vector<int> arrayORG, arraySRT;
	string	strARR = "1 2 8 9 -3 32 89 45 36 22 90 100 234 787 22 832 976 100";
	cout << "array(separated by SPACE) = \n";
	string strINPUT;
//	getline(cin, strINPUT);	
	strINPUT = strARR;
	strtk::parse(strINPUT, " ", arrayORG);
	
	vector<int>::iterator it;
	cout << "\narrayORG = \n";
	for(it=arrayORG.begin(); it< arrayORG.end(); ++it){
		cout << *it << "\t";
		if((distance(arrayORG.begin(), it)+1)%10 == 0) cout << endl;	
	}
	cout << "\n";
	
	arraySRT = arrayORG;
	sort(arraySRT.begin(), arraySRT.end(),greater<int>());

	cout << "Sorted Array = \n";
	vector<int>::iterator itSRT;
	for(itSRT=arraySRT.begin(); itSRT< arraySRT.end(); ++itSRT){
		cout << *itSRT << "\t";
		if((distance(arraySRT.begin(), itSRT)+1)%10 == 0) cout << endl;	
	}
	cout << endl;
	return 0;
}
