#include<iostream>
using namespace std;
    class account{
        private:
        double balance;
        double amount;
        public:
        void deposite(){
            cout<<"enter deposite amount"<<endl;
            cin>>amount;
             balance = balance+amount;
            cout<<"your total balance "<<balance<<endl;
            

        }
       void withdraw(){
            cout<<"enter withdraw amount";
            cin>>amount;
             balance=balance-amount;
             if(balance<0){
                 cout<<"paise khatham"<<endl;
                 exit(0);
             }
            cout<<"amount withdraw successfully"<<endl;

             cout<<"now your total balance"<<balance<<endl;
            // intrest(balance);
       }
        void intrest()
        {
            float rate,time;
            cout<<"rate";
            cin>>rate;
            cout<<"time";
            cin>>time;
            float temp1= balance*rate*time/100;
            cout<<"INTREST:"<<temp1<<endl<<"total balance in account after interest "<<temp1+balance<<endl;
          
        }

    };
    int main(){
         int a;
         int count =0;
         account o1;
         char name[30];
         cout<<"enter name"<<endl;
         cin>>name;
         do
         {
         cout<<"enter case"<<endl;
         cin>>a;
         switch(a){
             case 1 : o1.deposite();
                      break;
             case 2 : o1.withdraw();
                      break;
                      case 3 : o1.intrest();
                      break;
         }
         count++;
         }while(count=1);
         
        return 0;
    }