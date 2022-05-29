#include <iostream>
using namespace std;

class first {
public:
	void showf()
	{
		cout <<"shayam";
	}
	void showi(){
	    cout<<" is a software engineer";
	}
};

class second {

	first f;

public:
	second()
	{
		f.showf();
		f.showi();
	}
};

int main()
{
	second s;
}
