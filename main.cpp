#include <iostream>
#include "Solution.h"
#include "Student1004.h"
using namespace std;

int main() {
    Solution s;
    //    1001
//    int num = 3;
//    cout << s.callatzCount(num) << endl;

    //1002
//    string num;
//    cin >> num;
//    cout << s.writeThisNumber(num) << endl;

    //1004
    int n;
    cin >> n;
    Student1004 student[n];
    for(int i=0;i<n;i++) {
        cin>>student[i].name;
        cin>>student[i].id;
        cin>>student[i].mark;
    }
    s.outputStudentMark(student,n);
    return 0;
}
