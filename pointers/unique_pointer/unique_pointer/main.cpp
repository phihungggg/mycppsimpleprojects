#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int>unPtr1= make_unique<int>(25);
    unique_ptr<int>unPtr2=move(unPtr1);
    cout<<unPtr1.get()<<endl;
    cout<<*unPtr1<<endl;
    cout<<*unPtr2<<endl;


    return 0;
}
