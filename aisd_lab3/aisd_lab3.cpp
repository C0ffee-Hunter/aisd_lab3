#include <iostream>
#include "Class.h"

int main()
{
    Floyd f;
    string str = f.way("4", "1", "data.txt");
    cout << str;
    return 0;
}