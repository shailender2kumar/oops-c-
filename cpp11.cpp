#include<iostream>
using namespace std;
class Marks{
    int marks1 =31;
    int marks2=32;
    public:
    void show(){
        cout<<"constructor call here";
        cout<<"\n"<<marks1<<"\n";
        cout<<marks2;
    }
    ~Marks(){
        cout<<"\n destructor call here ";
    }
};
int main(){
    Marks m1;
    m1.show();
}
    
