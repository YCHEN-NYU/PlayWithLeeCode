#include <iostream>
#include <string>
using namespace std;


int main()
{
	// print out pyramid of *
	char space  = ' ', star = '*';
	string lineTemp = "";
	int N = 10;
	for(int i = 0; i <=2*N; i++)
	{
		if(i <= N)
		{
		lineTemp.push_back('*');  
		lineTemp.push_back(' ');  
		cout << string((N-i), ' ') << lineTemp << endl; 
		}
		else 
		{
		lineTemp.erase(lineTemp.end()-2, lineTemp.end());  
		cout << string((i-N), ' ') << lineTemp << endl; 
		}
	}
	return 0;
}
