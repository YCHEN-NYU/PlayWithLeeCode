/*
 * Author: YCHEN, Date: 2016/12/02, NYC
 * Use selection sort to sort a list of numbers
 * define a list of numbers by DATATYPE MAT[]
 */
#include <iostream>
using namespace std;

int main()
{
    int mat[] = {23, 77, 2837, -3903, 1, 2, -3, 93, 93, 100, 7, 100, 7, 82, 3, 33, -39, 0, 23, 138};
    int len_mat = sizeof(mat)/sizeof(*mat); 
    int min_index, min_value;
    for(int i = 0; i < len_mat; ++i)
    {
       min_index = i;
       min_value = mat[i];
       // find the minimal index and value of mat[i+1] --> mat[len_mat]
       for(int j = i+1;  j < len_mat; ++j)
       {
           if(mat[j] < min_value)
           {
               min_index = j;
               min_value = mat[j];
           }
       }
       // swap mat[i] and min in mat[i+1-->end]
       mat[min_index] = mat[i];
       mat[i] = min_value;
    }

    // print out the sorted list
    for (int k = 0; k < len_mat; ++k)
    {
        cout << mat[k] << " ";
    }
    cout << endl;
}
