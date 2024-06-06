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
        cout<<" Destructor invoked" <<endl;
    }


};
int main()
{

   weak_ptr<int> wePtr1;
   {

       shared_ptr<int>shPtr1= make_shared<int>(25);
       wePtr1 = shPtr1;
   }
   return 0;
}
