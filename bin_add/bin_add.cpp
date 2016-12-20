// Add two n-bit binary numbers together --> (n+1)-bit number
#include <iostream>
using namespace std;

int main()
{
    bool A[] = {1, 0, 0, 0, 0, 0, 0, 1}, B[] = {1, 0, 0, 0, 0, 0, 0, 0};
    int len = sizeof(A)/sizeof(*A);
    bool C[len+1];
    bool addon = 0;
    for(int i = len-1; i >=0; --i)
    { 
        if(A[i] && B[i])
        {
            C[i+1] = addon;
            addon = 1;
        }

        else
            if(A[i] || B[i])
            {
                if(addon)
                {
                    C[i+1] = 0;
                    addon = 1; 
                }
                else
                    C[i+1] = 1;
            }
            else
            {
                C[i+1] = addon;
                addon = 0;
            }
    }
    C[0] = addon;
    cout << "  ";
    for(int l = 0; l < len; ++l)
    {
        cout << A[l] << " ";
    }
    cout << endl;
    cout << "  ";
    for(int l = 0; l < len; ++l)
    {
        cout << B[l] << " ";
    }
    cout << endl;

    for(int l = 0; l < len+1; ++l)
    {
        cout << C[l] << " ";
    }
    cout << endl;
}
