#include<iostream>
using namespace std;
class test{
    private:
    int code;
    float marks;
public:
//default constructor
test(){cout<<"oops is nice\n";};
//parameterized constructor
test(int c,int p){
    code= c,marks =p;};
//copy constructor
test(const test &t){
    code=t.code;
    marks =t.marks;
    }
    
int display(){
    cout<<"code"<<code<<endl;
   
   cout<<"marks"<<marks<<endl;
    return 0 ;
}
//constructor overloading
test(int l ,int b,int h){
    cout<<"find area of cuboid \n ";
    int area = l*b*h ;
cout<<area;
}
test(int r){
    cout<<"\nfind area of square with same name \n";
    int area = r*r ;
cout<<area;

}
};
int main(){
    cout<<"default constructor\n";
    test t3;
    cout<<"parametereizd constructor\n";
    test t1(101,154);
    test t2(t1);
    t1.display();
    cout<<"call copy constructor \n";
    t2.display();
    cout<<"CONSTRUCTOR overloading \n";
    test t4(2,3,4);
    test t5(4);
    cout<<endl;
    return 0 ;
}