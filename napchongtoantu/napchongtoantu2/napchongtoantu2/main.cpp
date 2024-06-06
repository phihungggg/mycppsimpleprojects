#include <iostream>
#include <vector>

#include <algorithm>
using namespace std;



struct aa
{
    int a;
    string b;

    aa (int aa,string bb)
    {
        a=aa;
        b=bb;
    }

};


ostream& operator<<(ostream& cout, aa aaa )
{
    cout<< aaa.a << aaa.b <<endl;

    return cout;
}




struct Myself
{
    std::vector<aa> me;

    void operator+= ( aa object)
    {
        this->me.push_back(object);

    }



};
  ostream& operator << (ostream& cout,Myself mee)
    {         auto print = [&cout](aa obj) {
            cout << obj;
        };

        for_each(begin(mee.me),end(mee.me),print );

    }


int main()
{

    aa obja = aa(21, " Nguyen Phi Hung");
     aa objb = aa(18, " Nguyen Phi Hung`");
     aa objc = aa(17, " Nguyen Phi Hung`````");
     aa objd = aa(16, " Nguyen Phi Hung``````");
     Myself m;
     m+=objc;
    m+=objd;


    cout<< obja<<objb;

    cout<<m;

    auto print = [] () {cout << " test "<< endl ;};

    print();


    return 0;

}
