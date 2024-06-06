#include <iostream>
#include <string.h>
using namespace std;

class A
   {
    private:
      int a;
      string str ;
    public:
      A()
       {
	a=0; str="";
       }

      A& operator=(A& h)
       {
	 this->a = h.a;
	 this->str = h.str;
	 return *this;
       }

      void nhap()
       {
	 cout << "\nNhap so nguyen lop A: " ; cin >> a ;
	 cin.ignore();

	 cout << "\nNhap chuoi lop A: " ;
    getline(cin,str);

       }

      void xuat()
       {
	 cout << "\n" << "So nguyen lop A = " << a
		      << "  Chuoi lop A: " << str ;
       }
    } ;



  class B
   {
    private:
      int b;
      string str ;
    public:
      B()
       {
	 b=0;
	 str="";
       }


      B& operator=(B& h)
       {
	 this->b = h.b;

	 this->str = h.str;
	 return h;
       }


      void nhap()
       {
	 cout << "\nNhap so nguyen lop B: " ; cin >> b ;
        cin.ignore();
	 cout << "\nNhap chuoi lop B: " ;
        getline(cin,str);
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
      string str ;
    public:
      C():B()
       {
	  c=0;
	  str="";
       }


      C& operator=(C& h)
       {
	    // *((B*)this) =  B::operator=(h);
      B::operator=(h);
	 this->c = h.c;

	 this->str = h.str;
	 return *this;
       }


      void nhap()
       {
	 B::nhap();
	 cout << "\nNhap so nguyen lop C: " ; cin >> c ;
	 cin.ignore();
	 cout << "\nNhap chuoi lop C: " ;
    getline(cin,str);
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
      string str ;
      A    u;
    public:
      D():C(),u()
       {
	d=0; str="";
       }
      D& operator=(D& h)
       {
	  // *((C*)this)  = C::operator=(h);
	 C::operator=(h);
	 this->u = h.u;
	 this->d = h.d;
	 this->str =h.str;
	 return *this;
       }


      void nhap()
       {
	 u.nhap();
	 C::nhap();
	 cout << "\nNhap so nguyen lop D: " ; cin >> d ;
        cin.ignore();
	 cout << "\nNhap chuoi lop D: " ;
	 getline(cin,str);
       }


      void xuat()
       {
	 u.xuat();
	 C::xuat();
	 cout << "\n" << "So nguyen lop D = " << d
		       << "  Chuoi lop D: " << str ;
       }

    } ;



int main()
  {
    D h1,h2,h3;

    h1.nhap();
    h3=h2=h1;
    cout<<"\n\nH2:";
    h2.xuat();
    cout<<"\n\nH3:";
    h3.xuat();
    h1.nhap();
    cout<<"\n\nH2:";
    h2.xuat();
    cout<<"\n\nH3:";
    h3.xuat();
    cout<<"\n\nH1:";
    h1.xuat();
return 1;
  }
