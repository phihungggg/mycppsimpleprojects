#include <iostream>

using namespace std;

class HDBH
{
private:
    int shd;
    char *tenhang;
    double tienban;
    static int tshd;
    static double tstienban ;
public:

    static void in()
    {

        cout<<"\n" << tshd;
        cout<<"\n" << tstienban;

    }

};

int HDBH::tshd=5;
double HDBH::tstienban=20000.0;
int main()
{
    HDBH::in();
    return 1;

}
