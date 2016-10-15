#include <iostream>
#include <cmath>
using namespace std;
/*
 * 题目：打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位

数字立方和等于该数本身。例如：153是一个“水仙花数”，因为153=1的三次方

＋5的三次方＋3的三次方。
 */
int main() {
    for (int i = 100; i < 1000; ++i) {
        int digit1 = i % 10;
        int digit10 = (i/10) % 10;
        int digit100 = (i/100) % 10;
        if(pow(digit1,3)+pow(digit10,3)+pow(digit100,3) == i)
            cout << i << " is waterlily number.\n";
    }
    return 0;
}