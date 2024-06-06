#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;




int main()
{
    int a=0;
    auto f=[a]() {return a+10;};

    cout << f() ;

}


