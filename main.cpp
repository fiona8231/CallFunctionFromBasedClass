#include <iostream>

using namespace std;

class Parent{

public:
    void display(){
        cout << " This is Parent class" << endl;
    }
};

// Inheritance class
class Child : public  Parent{
public:
    void display(){
        cout << "This is Child class" << endl;
    }
};

// Passing the reference p
void WhoIsThis(Parent p){

    p.display();
}

int main() {

    Parent obj1;
    obj1.display(); // This is Parent class

    Child obj2;
    obj2.display(); // This is Child class


    WhoIsThis(obj1); // This is Parent class

    //passing reference -> alias of (Parent p)
    WhoIsThis(obj2); // This is Parent class




    return 0;
}