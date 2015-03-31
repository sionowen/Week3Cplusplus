#include<iostream>

using namespace std;

void insert_money(int&, int&, int&, int&);
void dollars(int, int, int, int);
void remove_money(int&, int&, int&, int&);
void display(int, int, int, int);

int main()
{
	int pennies = 0;
	int nickles = 0;
	int dimes = 0;
	int quarters = 0;
	char list;

	
	do
	{
		cout<<endl<<"enter i to insert money\nenter r to remove money\nenter d to display piggy bank\n enter x to exit "<<endl;
		cin>>list;
	
		switch(list)
		{
			case 'i':
				insert_money(pennies, nickles, dimes, quarters);
				break;
			case 'r':
				remove_money(pennies, nickles, dimes, quarters);
				break;
			case 'd':
				display(pennies, nickles, dimes, quarters);	
				break;
			case 'x':
				cout<<endl<<"peace yo "<<endl;
				break;
			default:
				cout<<"this was not an option"<<endl;

		}
	
	}while(list != 'x');
	return 0;
}

void insert_money(int &pennies, int &nickles, int &dimes, int &quarters)
{
	int a, b, c, d;
	char menu;
	do
	{
		cout<<endl<<"\tto add quarters enter q\n\tto add dimes enter d\n\tto add nickles enter n\n\tto add pennies enter p\n\tto return to the main menu enter m\n";
		cin>>menu;
		switch (menu)
		{
			case 'q' :
				cout<<endl<<"enter number of coins added :";
				cin>>d;
				quarters += d;
				break;
			case 'd' :
				cout<<endl<<"enter number of coins added :";

				cin>>c;
				dimes += c;
				break;
			case 'n' :
				cout<<endl<<"enter number of coins added :";

				cin>>b;
				nickles += b;
				break;
			case 'p' :
				cout<<endl<<"enter number of coins added :";

				cin>>a;
				pennies += a;
				break;
			case 'm' :
				break;
			default:
				cout<<"this was not an option";
				break;
		}
	}while(menu != 'm');	

}
void dollars(int pennies, int nickles, int dimes, int quarters)
{
cout<<endl<<"you have : $"<<(float)(pennies+(nickles*5)+(dimes*10)+(quarters*25))/100;

}
void display(int pennies, int nickles, int dimes, int quarters)
{
	cout<<endl<<"your piggy bank:\n";
	cout<<endl<<"pennies = "<<pennies<<" nickles = "<<nickles<<" dimes = "<<dimes<<" quarters = "<<quarters<<endl;
	dollars(pennies, nickles, dimes, quarters);
}

void remove_money(int &pennies, int &nickles, int &dimes, int &quarters)
{


	int a, b, c, d;
	char menu;
	do
	{
		cout<<endl<<"\tto withdraw quarters enter q\n\tto withdraw dimes enter d\n\tto withdraw nickles enter n\n\tto withdraw pennies enter p";
		cout<<"\n\tto return to the main menu enter m\n";
		cin>>menu;
		switch (menu)
		{
		//this can go negative because i am indecisive and bad at spelling
			case 'q' :
				cout<<endl<<"enter number of coins taken :";
				cin>>d;
				quarters -= d;
				break;
			case 'd' :
				cout<<endl<<"enter number of coins taken :";

				cin>>c;
				dimes -= c;
				break;
			case 'n' :
				cout<<endl<<"enter number of coins taken :";

				cin>>b;
				nickles -= b;
				break;
			case 'p' :
				cout<<endl<<"enter number of coins taken :";

				cin>>a;
				pennies -= a;
				break;
			case 'm' :
				break;
			default:
				cout<<"this was not an option";
				break;
		}
	}while(menu != 'm');	

}