#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
 * 题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔

子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数

为多少？
 */
int main() {
    int N = 20; // num_of_terms
    vector<long long> fib_vec;

    for (int i = 0; i < N; ++i) {
        if(i <= 1)
            fib_vec.push_back(1);
        else
            fib_vec.push_back(fib_vec[i-2]+fib_vec[i-1]);
        cout << fib_vec[i] << endl;
    }


    return 0;
}