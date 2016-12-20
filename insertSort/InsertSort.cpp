/*
 * Author: YCHEN, Date: 2016/12/02, NYC
 * Use insertion sort to sort a list of numbers
 * 1. define a list of numbers by vector<DATATYPE> 
 * 2. create a sorting function call insertSort(vector<DATATYPE> *ARG)
 */
#include <iostream>
using namespace std;

int main()
{
    int mat[] = {23, 77, 2837, -3903, 1, 2, -3, 93, 93, 100, 7, 100, 7, 82, 3, 33, -39, 0, 23, 138};
    int len_mat = sizeof(mat)/sizeof(*mat); 
    // sort mat by increasing order
    int separator = 1;
    int temp;
    for(int i = separator; i < len_mat; ++i)
    {
        for (int j = 0; j < i - 1; ++j)
        {
            if(mat[i] < mat[j])
            {
                temp = mat[i];
                for(int k = i; k > j; --k)
                {
                    mat[k] = mat[k-1];
                }
                mat[j] = temp;
            }
        }
        
    }
    bool order_flag = true;
    for(int l = 0; l < len_mat; ++l)
    {
        if(l < len_mat)
        {
            if(mat[l] > mat[l+1])
                order_flag = true;
        }
        cout << mat[l] << " ";
    }
    cout << endl;
    if(!order_flag)
        cout << "Sorting Failed" << endl;
    else
        cout << "Sorting Successfully" << endl;
}
