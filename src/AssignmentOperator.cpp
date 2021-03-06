//============================================================================
// Name        : AssignmentOperator.cpp
// Author      : Peter Heck
// Version     : 1.0
// Copyright   : 2019
// Description : C++ Constructors and Assignment Study
//============================================================================

#include <iostream>
#include "CMyString.hpp"

using namespace std;

CMyString generateCMyString()
{
    char buffer2[100] = "Hello World 2";
    CMyString a(buffer2);
    return a;
}

int main() {
    char buffer1[100] = "Hello World";
    CMyString a(buffer1);
    CMyString b(a);
    CMyString c;
    c = b;
    cout << "Print out = " << c.getMyString() << endl;
    char buffer3[100] = "Never print this";
    CMyString d(buffer3);
    d = generateCMyString();
    cout << "Print out = " << d.getMyString() << endl;
    return 0;
}
