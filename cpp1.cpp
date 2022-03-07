#include<iostream>
using namespace std;
int main(){
    int m,n,i,j,a[100][100];
    cout<<"enter the value of m"<<endl;
    cin>> m;
    cout<<"enter the value of n"<<endl;
    cin>>n;
     cout<<"enter value"<<endl;
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            cout<<endl;
        }
    }
     cout<<"result"<<endl;
    for(int i =0;i<m;i++){
        cout<<"\n";
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
    }
    return 0;
}