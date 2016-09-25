/*

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




int main()
{
	
	int a=1,b=2;
	int target = 4;
	vector<int> arr;

	// Enter array
	int N = 10;
	for(int i = 0; i < N; i++){

		arr.push_back(i*i);
	}	

	
	// find target from arr
	vector<int>::iterator it;
	it = find(arr.begin(), arr.end(), target);
	if(it != arr.end()){
		cout << "Index = " << distance(arr.begin(), it) << endl;
		cout << "Value = " << *it << endl; 
	}
	else
		cout << "Not Found!" << endl;
	/*
	vector<int>::iterator it;
	int j = 0;
	for(it = arr.begin(); it <  arr.end();  it ++){
	cout << j << "\t" << *it  << endl;	
	j++;
	}	
	cout << "size of arr = " << arr.size() << endl;
	*/
	return 0;
}
