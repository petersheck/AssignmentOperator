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
    char buffer[100] = "Hello World";
    CMyString a(buffer);
    CMyString b(a);
    CMyString c;
    c = b;
    cout << c.getMyString() << endl;
    return 0;
}
