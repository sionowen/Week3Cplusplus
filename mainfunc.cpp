#include<iostream>
#include "cubeish.cpp"
using namespace std;

int main()
{
	int n = 1;

	while (n!= 0)
	{
		cout<<endl<<"enter a value :";
		cin>>n;
		cout<<"cube of "<<n<<" is "<<cube(n)<<endl;
	}	

	return 0;
}