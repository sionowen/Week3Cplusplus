#include<iostream>

using namespace std;

void swap(int&, int&);
int main()
{
	int a;
	int b;
	cout<<endl<<"input two numbers and I will swap them so hard your teeth hurt ";
	cin>>a>>b;
	swap(a,b);
	cout<<"this is how it is now "<<a<<" "<<b<<endl;



	return 0;
}


void swap(int &a, int &b)
{
int c = a;
a = b;
b = c;

}
