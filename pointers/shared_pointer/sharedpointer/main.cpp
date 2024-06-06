#include <iostream>
#include <memory>


using namespace std;


class Myclass{
public:
    Myclass()
    {
        cout<< " Constructor Invoked " <<endl;
    }
    ~Myclass()
    {
        cout<<" Destructor invoed" <<endl;
    }


};


int main()
{
    shared_ptr<Myclass> shPtr1= make_shared<Myclass>();
    cout<< "Shared count " <<shPtr1.use_count()<<endl;
    shared_ptr<Myclass> shPtr2=shPtr1;
    cout<< "Shared count : "<<shPtr2.use_count()<<endl;
    return 1;

}

