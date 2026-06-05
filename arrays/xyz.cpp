#include <iostream>
using namespace std;

class B;
class A{
    int x;
    public:
    A(){
        x=10;
    }
    friend void show(A,B);

};
class B{
    int y;
    public:
    B(){
        y=20;
    }

    friend void show(A,B);

};
void show(A a,B b){
    cout << a.x+b.y;

}
int main(){
    A obj1;
    B obj2;
    show(obj1,obj2);

    return 0;
}

