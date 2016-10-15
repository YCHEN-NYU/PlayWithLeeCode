#include <iostream>
#include <cmath>
using namespace std;

bool check_prime(int val){
    bool prime_flag = false;
    for (int i = 2; i < sqrt(float(val))+1; ++i) {
        if(val % i  == 0)
        {
            prime_flag = true;
            break;
        }
    }
    return prime_flag;
};

/*
 * 题目：判断101-200之间有多少个素数，并输出所有素数。
 */
int main() {
    for (int i = 2; i < 200; ++i) {
        if(!check_prime(i))
            cout << i << " is a prime number\n";


    }
    return 0;
}