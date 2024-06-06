#include <iostream>

using namespace std;

class MONHOC
{

private:

    string tenmonhoc;
    int st;
public:
    MONHOC()
    {
        tenmonhoc="";
        st=0;

    }
    MONHOC(string tenmonhoc1,int st1)
    {
    tenmonhoc=tenmonhoc1;
    st=st1;

    }


    void in()
    {

        cout<<"\n Ten mon:" <<tenmonhoc<<" so tiet :" <<st;

    }

};

class NGUOI

{
private:

    int ns;

protected:
    string ht;
public:

    NGUOI()
    {
        ht ="";
        ns=0;

    }

    NGUOI( string ht1,int ns1)
    {
        ht=ht1;
        ns=ns1;
    }


    void in()
    {
        cout<<"\n Ho ten: " <<ht<< " nam sinh "<<ns;



    }



};


class GIAOVIEN: public NGUOI
{
private:
    string bomon;
    MONHOC mh;
public:
    GIAOVIEN():mh(),NGUOI()
    {
        bomon="";

    }
    GIAOVIEN(string ht1,int ns1,string monhoc1,int st1,string bomon1):
        NGUOI(ht1,ns1),mh(monhoc1,st1)
        {

            bomon=bomon1;

        }
void in()
{
    NGUOI::in();
    cout<<"\n Cong tac tai bo mon: "<<bomon;
    mh.in();


}

};


int main()
{
    GIAOVIEN *g2;
    g2=new GIAOVIEN(" ABC ",1995," toan ",5, "Su pham");
    g2->in();

    delete g2;

return 1;

}





