#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int slen,smrk;
    cout<<"enter the no of student";
    cin>>slen;
    FILE*fptr;
    fptr=(fopen("student.txt","w"));
    if(fptr == NULL){
        cout<<"ERROR";
        exit(1);
    }
    for(int i=0;i<slen;i++)
    {
        cout<<"student"<<i+1<<"\n enter name";
        cin>>name;
        cout<<"\n enter mark";
        cin>>smrk;
        fprintf(fptr,"\nName: %s \nMarks=%d\n",name,smrk);
    }
    fclose(fptr);
    return 0;
}
