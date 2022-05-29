#include<iostream>
using namespace std;
class Base{
    int roll;
     public:
    virtual void display(){
         cout<<"Base class"<<endl;
     }
};
class Derived :public Base{
    public:
   void display(){
        cout<<"derived class"<<endl;
    }
};
int main(){
    Base*bp;
    Derived d1;
    bp=&d1;
    bp->display();
    
}


