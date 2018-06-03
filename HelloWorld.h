#include <iostream>
using namespace std;

class A
{

public:
	void out()
	{
		cout<< "this is the hello world for Product owner----[Hello Product Owner]" <<endl;
	}
	
};

class B
{

public:
	void outpu()
	{
		cout<< "this is the hello world for Stakeholders ----[Hello StakeHolders]" <<endl;
	}
	
};

int main() 
{

    A a1;
    B b1;
    a1.out();
    b1.outpu();
    return 0;
}



