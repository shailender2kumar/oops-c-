#include<iostream>
using namespace std;
class DM{
    public:
    int meter;
    int centimeter;
   
    DM(){meter = 0,centimeter =0;};
    DM(int m,int c){
        meter=m;
        centimeter =c;}
    void display(){
        cout<<"meter "<<meter;
        cout<<"centimeter "<<centimeter;
    }
        
};
class DB{
    public:
    int feet ;
    int inches;

    DB(){
        feet =0;
        inches=0;
    }
    DB(int s,int b){
        feet=s;
        inches=b;
    }
    
};
DM add(DM s,DB e){
  DM obj;  
 obj.meter = s.meter+e.feet ;
 obj.centimeter=s.centimeter+e.inches;
 return obj;
   
}
int main(){
    DB a(1,20);
    DM b(30,20);
     DM c=add(b,a);
     c.display();
    
}
