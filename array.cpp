#include<iostream>

using namespace std;

int main()
{
const int SIZE = 4;
int deposit[SIZE];

for(int i = 0; i < 4 ; i++) 
{

cout<<endl<<"enter an integer for the array space "<<i<<" :";
cin>>deposit[i];
}
for(int i = 3; i >= 0 ; i--) 
cout<<endl<<"deposit "<<i<<" equals "<<deposit[i];



	return 0;
}