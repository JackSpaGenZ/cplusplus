#include <iostream>
#include <string>
#include "header/problem_03.h"

using namespace std;

int main()
{
    Solution str;
    str.getString(str.s, str.t);
    if (str.isIsomorphic(str.s, str.t))
    {
        cout<<"yes";
    }
    else {cout<<"no";}
    
}
