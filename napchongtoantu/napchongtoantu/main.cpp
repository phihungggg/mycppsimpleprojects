#include <iostream>

using namespace std;

class PS
{
private:
    int tu;
    int mau;
public:

        PS (int t,int m)
    {
        tu=t;
        mau=m;


    }

        PS ()
        {

        }
    PS operator*( PS const &p)
    {
        PS kq;
        kq.tu=this->tu * p.tu;
        kq.mau=this->mau * p.mau;
        return kq;

    }

 void xuat()
    {
        cout << tu << mau;

    }

};


int main()
{
    PS p1(1,2);
    PS p2(3,4);
    PS p3=p1*p2;
    p3.xuat();





}
