#ifndef HEADER_M11_H
#define HEADER_M11_H

#include<iostream>
#include<string>
using namespace std;

#include "header_m1.h"
#include "header_m3.h"
#include "header_m5.h"
#include "header_m7.h"
#include "header_m9.h"

class m11
{
public:
    void menu();
};

int main()
{
    m11 obj;
    obj.menu();
    return 0;
}

#endif
