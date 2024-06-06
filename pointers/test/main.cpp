#include <iostream>

using namespace std;


class Test
{
public:
    Test()
    {
        cout<<" Constructor invoked . " <<endl;

    }

    ~Test()
    {
        cout<<" Destructor invoked . " <<endl;
    }


};


int main()
{   Test t;


    return 0;
}
