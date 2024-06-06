#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class A
{
private:
int a;
char *str ;
public:
A()
{
a=0; str=NULL;
}
A(int a1,char *str1)
{
a=a1; str=strdup(str1);
}
void xuat()
{
cout << "\n" << "So nguyen lop A= " << a
<< "  Chuoi lop A: " << str ;
}
} ;
class B
{
private:
int b;
char *str ;
public:
B()
{
b=0; str=NULL;
}
B(int b1,char *str1)
{
b=b1; str=strdup(str1);
}
void xuat()
{
cout << "\n" << "So nguyen lop B = " << b
<< "  Chuoi lop B: " << str ;
}
} ;
class C : public B
{
private:
int c;
char *str ;
public:
C():B()
{
c=0; str=NULL;
}
C(int b1,char *strb,int c1, char *strc) : B(b1,strb)
{
c=c1; str=strdup(strc);
}
void xuat()
{
B::xuat();
cout << "\n" << "So nguyen lop C = " << c
<< "  Chuoi lop C: " << str ;
}
} ;
class D : public C
{
private:
int d;
char *str ;
A    u;
public:
D():C(),u()
{
d=0;
str=NULL;
}
D(int a1, char *stra,int b1,char *strb,int c1,
   char *strc, int d1,
   char *strd) : u(a1,stra), C(b1,strb,c1,strc)
{
d=d1;
str=strdup(strd);
}
void xuat()
{
u.xuat();
C::xuat();
cout << "\n" << "So nguyen lop D = " <<
    d << "  Chuoi lop D: " << str ;
}
} ;
int main()
{

D h(1,"AA",2,"BB",3,"CC",4,"DD");

cout << "\n\n Cac thuoc tinh cua h thua ke B: ";
h.B::xuat();
cout << "\n\n Cac thuoc tinh cua h thua ke B va C: ";
h.C::xuat();
cout << "\n\n Cac thuoc tinh cua h thua ke B,C va khai bao trong D:" ;
h.xuat();

return 1;
}
