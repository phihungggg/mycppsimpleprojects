#include <iostream>
using namespace std;

class PS
{

    private: int t,m;
    public:
        PS()
        {
            t=0;
            m=1;
        }
        PS (int t1,int m1);
        void nhap();
        void in();
        PS operator*= (PS p2)
        {
            t*=p2.t;
            m*=p2.m;
            return *this;

        }
};

         PS::PS(int t1,int m1)
        {

            cout <<"\n Nhap tu va mau : " ;
            cin>>t>>m;

        }

void PS:: nhap()
        {
            cout<< "\n Nhap tu va mau:  ";
            cin>> t >> m;

        }
         void PS::in()
        {
             cout<<"\n PS = " <<t<< "/" <<m;


        }


        int main()
        {
            PS q,p(2,7),s(3,5);
            cout<< "\n NHap PS p :" ;
            p.nhap();

            s.in();
            p.in();
            q= p*=s;
            p.in();
            q.in();

        return 1;

        }

