//
// Created by Administrator on 2020/9/18 0018.
//

#include <iostream>
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

string Solution::writeThisNumber(string num) {
    int sum = 0;
    string pingyin[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    stack<int> mystack;
    string result;
    for(int i=0;i<num.size();i++) {
        sum += static_cast<int>(num[i] - 48);
    }
    while (sum!=0) {
        int temp = sum%10;
        mystack.push(temp);
        sum /= 10;
    }
    while (!mystack.empty()) {
        result += pingyin[mystack.top()];
        mystack.pop();
        if (!mystack.empty()) {
            result += ' ';
        }
    }
    return result;
}

string Solution::pass(string str) {
    string resultYes("YES");
    string resultNo("NO");
    return resultYes;
}

void Solution::outputStudentMark(Student1004 *student,int n) {
    int excellentStudentNo = 0;
    int awfulStudentNo = 0;
    int excellentStudentMark = student[0].mark;
    int awfulStudentMark = student[0].mark;
    for(int i=1;i<n;i++) {
        if (student[i].mark>excellentStudentMark) {
            excellentStudentMark = student[i].mark;
            excellentStudentNo = i;
        }
        if (student[i].mark<awfulStudentMark) {
            awfulStudentMark = student[i].mark;
            awfulStudentNo = i;
        }
    }
    cout << student[excellentStudentNo].name << " " << student[excellentStudentNo].id << endl;
    cout << student[awfulStudentNo].name << " " << student[awfulStudentNo].id << endl;
}
