#include<iostream>
using namespace std;
 class power
 {
     private:
     double m,result =1;
     int n;
     public :
     void takefunction()
     {
cout<<"enter the interger"<<endl;
cin>>m;
cout<<"enter the power"<<endl;
cin>>n;
 }
 void displaydata()
 {
     cout<<"your result is "<<result<<endl;
 }
 void powerfun(){
     for(int i=1;i<=n;i++){
     result=result*m;
     }
 }
 };
  int  main()
  
  {
      power s1;
      s1.takefunction();
      s1.powerfun();
      s1.displaydata();
return 0;
  }
  
 



