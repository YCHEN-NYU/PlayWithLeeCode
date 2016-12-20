// Linear Search in a list, return the target <value, Index> or NULL if no match found
#include <iostream>
using namespace std;

int main()
{
    int mat[] = {2, 32, 89, -1, 0, 98, 77, 65, 11, -233};
    int target;
    cout << "target = "; 
    cin >> target;
    int len_mat = sizeof(mat)/sizeof(*mat);
    bool match_flag = false;
    int match_index = 0, match_value = 0;

    for(int i = 0; i < len_mat; ++i)
    {
        if(target == mat[i])
        {
            match_flag = true;
            match_index = i;
            match_value = mat[i];
            break;
        }
    }

   if(match_flag)
       cout << "Target Found!\t" << "mat[" << match_index << "] = " << match_value << endl;
   else
       cout << "No target Found!" << endl;
}
