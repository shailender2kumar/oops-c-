#include<iostream>
using namespace std;
class TIME{
    public:
    int hours ;
    int minutes;
    public:
    TIME(){hours =0;
    minutes =0;
    }
    TIME(int h, int m){
        hours=h;
        minutes=m;
    }
    friend TIME  add();
    void disp(){
        cout<<"hours = "<<hours<<endl;
        cout<<"minutes = "<<minutes<<endl;
    }
};
TIME add(TIME obj1,TIME obj2){
    TIME obj3;
    obj3.hours=obj1.hours+obj2.hours;
    obj3.minutes=obj1.minutes+obj2.minutes;
    return obj3;
}
int main()
{
    TIME obj1(10,20),obj2(1,2);
   TIME obj3 = add(obj1,obj2);
   cout<<"after add\n";
   obj3.disp();
    return 0;}
