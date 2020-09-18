//
// Created by Administrator on 2020/9/18 0018.
//

#include "../include/Solution.h"

//1001
int Solution::callatzCount(int num) {
    int count=0;
    while(num!=1) {
        if (num%2==0) {
            num = num/2;
            count++;
        } else {
            num = (3*num+1)/2;
            count++;
        }
    }
    return count;
}

string Solution::writeThisNumber(char* num) {
    return string("hello");
}
