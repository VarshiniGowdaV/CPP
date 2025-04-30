#include <iostream>
using namespace std;

class Entity {
protected:
    int X, Y;

    void print() {
        cout << "Entity print(): X = " << X << ", Y = " << Y << endl;
    }

public:
    Entity() {
        X = 0;
        Y = 0;
        print();
    }

    void show() {
        print();
    }
};

class Player : public Entity {
public:
    Player() {
        X = 2;
        Y = 3;
        print();
    }
};

int main() {
    Entity e;
    e.show();

    Player p;

    cout << "Hello World!" << endl;
    return 0;
}
