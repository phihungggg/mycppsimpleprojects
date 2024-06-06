#include <iostream>

using namespace std;

class SumInt
{
private:
    int  mSum;
public:
    SumInt() : mSum(0) {}


    void operator()(int x){
    mSum+= x;}

    int getSum()
    {
        return mSum;
    }



};

int main( int argc,char *argv[])
{
    int arr1[] = {1,2,3,4,5,6,7,8,9,10 };
    int arr2[] = {15,16,17,18,19,20};
    SumInt f;

    for (unsigned int i=0; i<sizeof(arr1)/sizeof(arr1[0]);i++)
        f(arr1[i]);

     for (unsigned int i=0; i<sizeof(arr2)/sizeof(arr2[0]);i++)
        f(arr2[i]);

     cout<< f.getSum() << endl;
     return 0;

}







