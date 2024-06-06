#include <iostream>

using namespace std;

class A
{

private:
    int n;
    int m;

public:

void nhap();
void xuat();

};
void A:: nhap()
{
    cout<<"\n Nhap n : " <<endl;
    cin>>n;
    cin.ignore();
     cout<<"\n Nhap m : " <<endl;
    cin>>m;
    cin.ignore();
}

void A:: xuat()
{
    cout<<"\n  xuat n va m : " <<n<<m<<endl;
}

class B
{
  private:
      int m,n;

      float a[20][20];
  public:
    void nhap();
    void xuat();

};

void B:: nhap()
{
    cout<<"\n Nhap n : " <<endl;
    cin>>n;
    cin.ignore();
     cout<<"\n Nhap m : " <<endl;
    cin>>m;
    cin.ignore();
}

void B:: xuat()
{
    cout<<"\n  xuat n va m : " <<n<<m<<endl;
}



class D:public A,public B
{

private:
    int k;

public:
    void nhap();
    void xuat();
};


void D::nhap()
{

cout<<"\n Nhap k: " ;
cin>> k;// k la thuoc tinh cua Dư
cin.ignore();
A::nhap();//nhap cac thuoc tinh D ke thua tu A
B::nhap(); //nhap cac thuoc tinh D ke thua tu B
}

void D::xuat()
{
    cout <<"\n k= " <<k;
    A::xuat(); //xuat cac thuoc tinh D ke thua tu A
    B::xuat();  //xuat cac thuoc tinh ke thua tu B
}

int main()
{
D h;
h.nhap();
h.A::xuat();
h.B::xuat();
h.xuat();
}




