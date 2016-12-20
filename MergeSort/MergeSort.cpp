// Use Merge Sort method to sort an array by increasing order
// Use vector instead of matrices for the sorting process
// get familiar with vector first
#include <iostream>
using namespace std;

void bubbleSort(int mat[], int len)
{
    int temp;
    for(int i = 0; i < len; ++i)
    {
        for(int j = 0; j < len; ++j)
        {
            if(mat[j] > mat[j+1])
            {
                temp = mat[j];
                mat[j] = mat[j+1];
                mat[j+1] = temp;
            }
        }
    }
}

void printMat(int mat[], int len)
{
    for(int k = 0; k < len; ++k)
    {
        cout << mat[k] << " ";
    }
    cout << endl;
}

void merge(int mat1[], int len1, int mat2[], int len2)
{
    // pass two sorted matrices and merge them together
    int total_len = len1 + len2;
    // for i = 0 to i < total_len, pick smaller value each time from mat1, mat2
    int i = 0;
    int mat;
    while(i < total_len)
    {
        // 
        i++;
    }
}
int main()
{
    int mat1[] = {23, 77, 37, -39};
    int mat2[] = {3, 7, 37, 83, 138};
    int len1 = sizeof(mat1)/sizeof(*mat1); 
    int len2 = sizeof(mat2)/sizeof(*mat2); 
    bubbleSort(mat1, len1);
    printMat(mat1, len1);
    bubbleSort(mat2, len2);
    printMat(mat2, len2);
    return 0; 
}
