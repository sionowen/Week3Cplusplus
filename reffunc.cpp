#include<iostream>

using namespace std;

void stuff(int rad , float &cir, float &area)
{

cir = rad * 2 * 3.14;

area = rad * rad * 3.14;

}


int main()
{
int rad;
float cir;
float area;

cout<<endl<<" enter the radius ";
cin>>rad;
stuff(rad, cir, area);
cout<<"circumference = "<<cir<<endl;
cout<<"area = "<<area<<endl;

	return 0;
}