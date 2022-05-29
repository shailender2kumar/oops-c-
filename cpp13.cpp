#include<iostream>
using namespace std;
class info1
{
public:
void display(){
cout<<"this is our base class"<<endl;}
};
class info2:public info1
{
public:
void display(){
cout<<"this  is info2  class which is derived from base class";}
};
class info3:public info2{
public:
void display(){
cout<<"\nthis is info3 class which is derived from info2 class";}
};

int main()
{
	info3 s;
	s.display();


	return 0;
}
