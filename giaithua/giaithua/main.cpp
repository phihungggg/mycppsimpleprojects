#include <iostream>

using namespace std;

long giaithua(int n);
long giaithua( int n)
{
    if (n==1)
    return 1;
    else
    return n*giaithua(n-1);


}

long long numberOfCombinations(int n, int k)
{
    return giaithua(n)/(giaithua(k)*giaithua(n-k) );

}


int main()
{
    long long n;
    cout <<
    return 0;
}
