#include <iostream>
#include <string>
using namespace std;

class Entity
{public:
    virtual say () { cout<<" Entity " <<endl;}
};


class Player : public Entity
{public:
    virtual say () { cout<<" Player " <<endl;}
};

class Enemy: public Entity
{public:
    virtual say () { cout<<" Enemy " <<endl;}
};




int main()
{
    Player* player = new Player();
    Entity* actuallyPlayer = player;
    Entity* actuallyEnemy = new Enemy();
Entity* actuallyEntity = new Entity();
    Player* p=dynamic_cast<Player*>(actuallyPlayer);//right
     Player* p=dynamic_cast<Player*>(actuallyEnemy);//wrong
     Player* p=dynamic_cast<Player*>(actuallyEntity); //wrong
    p->say();

    return 0;
}
