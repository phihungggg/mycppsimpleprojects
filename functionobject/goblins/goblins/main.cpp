#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Goblin
{
    int mHealth;
    int mStrength;
    Goblin(int h,int s) : mHealth(h),mStrength(s){}
bool operator <(const Goblin& rhs){

   return this->mHealth < rhs.mHealth;
    }




};

struct GoblinComerator{

bool operator()(const Goblin& lhs, const Goblin& rhs) const
{
    return lhs.mStrength < rhs.mStrength;


}

};

int main()
{
    vector <Goblin> goblins {Goblin(5,400),Goblin(3,200),Goblin(100,1000)};
    std::sort(begin(goblins),end(goblins),GoblinComerator());

    for (auto g:goblins)  // assign the values of goblins to the auto g
    {
        std::cout<<g.mHealth<<" " << g.mStrength <<std::endl;



    }
    return 0;

}
