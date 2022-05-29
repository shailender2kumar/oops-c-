#include<bits/stdc++.h>
using namespace std;
void IOS_width()
{
	char c = 'A';
	cout.width(5);
	cout << c <<"\n";
	int temp = 10;
	cout<<temp;
}
void IOS_precision()
{
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	cout<<3.1422;
}
void IOS_fill()
{
	
	char ch = 'a';
	cout.fill('*');	
	cout.width(10);
	cout<<ch <<"\n";
	int i = 1;
	cout.width(10);
	cout<<i;

}

void IOS_setf()
{
	int val1=10,val2=20;
	cout.setf(ios::showpos);
	cout<<val1<<" "<<val2;
}
void IOS_unsetf()
{
	cout.setf(ios::showpos|ios::showpoint);
	cout.unsetf(ios::showpos);
	cout<<300.0;
}
int main()
{
	IOS_width();
	IOS_precision;
	IOS_fill();
	IOS_setf();
	IOS_unsetf();
		char line[100];
	int data;
	char val;
	cout<<"unformatte io operation\n";
	cout<<"\n enter data\n";
	cin >> data;
	cin >> val;
	cout << data << " " << val;
	return 0;
}





