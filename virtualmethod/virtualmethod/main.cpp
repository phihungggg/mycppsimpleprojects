#include <iostream>

using namespace std;

class A
{
public:
int  a;
} ;
class B : virtual public A
{
public:
int  b;
} ;
class C : virtual public A
{
public:
int  c;
} ;

class D : public B , public C
{
public:
int  d;
} ;
int main()
{
D  h ;
h.d = 4 ; // tốt
h.c =  3 ; // tốt
h.b = 2 ; // tốt
h.a =  1 ; // tot
return 1;
}

