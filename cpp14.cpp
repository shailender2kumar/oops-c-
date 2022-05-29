#include<iostream>
using namespace std;
class Student{
    int roll;
    public:
    void get(int x){roll=x;}
    void put(){cout<<"\nroll"<<roll;}
};
class Test:public Student{
    protected:
    float t1,t2;
    public:
    void get_marks(float x,float y){
        t1=x;
        t2=y;
    }
    void smrk(){
        cout<<"\ntest1"<<t1<<"test2 "<<t2<<endl;}
};
class Sports{
    protected:
    float sp; 
    public:
    void getsp(int x){
        sp=x;
    }
    void putsp(){
        cout<<"sports marks"<<sp<<endl;;
    }
};
class result:public Test,public Sports{
    float total;
    public:
    void disp(){
        total=t1+t2+sp;
        put();
        smrk();
        putsp();
        cout<<"total" <<total<<endl;
    }
};
int main(){
    result obj;
    obj.get(202120);
    obj.get_marks(2,3);
    obj.getsp(45);
    obj.disp();
}
    
    

    
    
