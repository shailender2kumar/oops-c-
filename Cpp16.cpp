#include<iostream>
using namespace std;
class Count{
    private:
    float value;
    public:
    Count(){
        value =5;
    }
    void operator -- () {
    value =value/2;
        
    }
    void display(){
        cout<<"ans "<<value<<endl;
    }
};
int main(){
   Count count1;
   --count1;
   count1.display();
   return 0;
}
