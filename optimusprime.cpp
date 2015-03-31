#include<iostream>

using namespace std;

int main()
{
	int halvedinput;
	int ognum;
	bool prime = 1;
	cout<<endl<<"input a number and i will tell you if its prime :";
	cin>>ognum;

	halvedinput = ognum / 2;

	for(int i = 2 ; i <= halvedinput ; ++i)
	{
		if(ognum % i == 0)
		{
			prime = 0;
		}	
	}
	if (ognum == 2)
		prime = 0;
	if (prime)
		cout<<endl<<"that is prime";
	else
		cout<<endl<<"not prime brah";
	cout<<endl;

	return 0;
}