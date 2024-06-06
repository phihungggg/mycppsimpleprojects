#include <iostream>

using namespace std;


class testFunction
{
public:
    void operator()(int i)
{
    std::cout <<"text function "<<i<<endl;


}
    void operator()(int i, int j)
    {
        cout<<"text function " <<i<<" "<<j<<endl;
    }
};


int main()
{
    testFunction f;
    testFunction()(10);
    testFunction()(10,20);
    return 0;
}
