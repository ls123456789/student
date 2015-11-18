//
//  main.cpp
//  student
//
//  Created by admin on 15/11/18.
//  Copyright © 2015年 内师大. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int num;
    char sex;
    string phnum;
    string course[5];
public:
    Student(string n,int nu,char s,string pn,string cou[5])
    {
        name = n;
        num = nu;
        sex = s;
        phnum = pn;
        course[0] = cou[0];
        course[1] = cou[1];
        course[2] = cou[2];
        course[3] = cou[3];
        course[4] = cou[4];
    }
    void set_put()
    {
        cin>>name>>num>>sex>>phnum>>course[0]>>course[1]>>course[2]>>course[3]>>course[4]>>endl;
    }
    void show()
    {
        
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
