#include <iostream>


using namespace std;



class HDBH
{

private:
    string tenhang;
    double tienban;
    static int tshd;
    static double tstienban;
public:
    HDBH(string tenhang1,double tienban1)
    {
        tienban=tienban1;
        tenhang=tenhang1;
        ++tshd;
        tstienban += tienban;

    }
~HDBH()
{
    --tshd;
    tstienban -=tienban;
}

void sua();
static void in();


};
int HDBH::tshd=0;
double HDBH::tstienban=0;
void HDBH::in()
{
    cout<<"\n\nTong so hoa don :" << tshd;
    cout <<"\nTong so tien: " << tstienban;
}

void HDBH::sua()
{
    cout<<"\n\n Ten hang: " << tenhang;
    cout<<"\n Tien ban : " << tienban;
    tstienban-=tienban;
    cout<<"\n Sua tien ban thanh :";
    cin>>tienban;
    tstienban+=tienban;

}




int main()
{

    HDBH *h1= new HDBH (" Xi mang",2000);
    HDBH *h2= new HDBH(" Sat thep ",3000);
    HDBH *h3= new HDBH(" Ti vi ",4000);

    HDBH::in();
    delete h1;
    HDBH::in();
    delete h2;
    HDBH::in();
    delete h3;

}
