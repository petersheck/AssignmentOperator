//============================================================================
// Name        : AssignmentOperator.cpp
// Author      : Peter Heck
// Version     :
// Copyright   : 2018
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "CMyString.hpp"

using namespace std;

int main() {
    char pData[100] = "Hi";
    CMyString a(pData);
    CMyString b(a);
    CMyString c;
    c = b;
    cout << c.getMyString() << endl;
    return 0;
}
