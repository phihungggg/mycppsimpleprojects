#include <iostream>
using namespace std;

class Character {
private:
    string name;
    double damagetake;
    static double concac;

public:
    Character(string name1, double damagetaken1) {
        name = name1;
        damagetake = damagetaken1;
        concac = concac + damagetake;
    }

    static void print() {
        cout << " damage take  " << concac;
    }

    ~Character() {
        concac -= damagetake;
    }
};

// Define the static member variable outside the class definition
double Character::concac = 0;

int main() {
    Character *h = new Character("Hungg ", 987);
    h->print();
    return 1;
}
