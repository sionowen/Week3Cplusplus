#include<iostream>

using namespace std;

int arraysum(int[], int);
void ReadDepositArray(int [], int);
void ShowArray(int [], int);
void ShowDepositArrayReverse(int [], int);
int main()
{
	int a=0;
	const int SIZE = 20;
	int arr[SIZE];
	int i = 0;
	cout<<endl<<"enter up to twenty numbers and terminate with 0"<<endl;
	do
	{
		cout<<"array number "<<i+1<<" = ";
		cin>>a;
		arr[i] = a;
		++i;
	}while	(a != 0);
	
	ShowArray(arr, i-1);

	cout<<endl<<"the sum of the array is :"<<arraysum(arr, i)<<endl;
	return 0;
}

void ReadDepositArray(int array[], int arraysize)
{
	//cout<<endl<<"enter 5 numbers to be deposited :";

	for (int i=0; i<5; i++)
	{
		cout<<endl<<"deposit entry "<<i+1<<" = ";
		cin>>array[i];
	}
}
void ShowArray(int array[], int arraysize)
{
	cout<<endl<<"this array has "<<arraysize<<" elements and they are ";
	for (int i = 0 ; i < arraysize; i++)
	{
	cout<<endl<<"array "<<i+1<<" = "<<array[i];
	}	
}

void ShowDepositArrayReverse(int array[], int arraysize)
{
	for (int i = 4; i>=0; i--)
	{
		cout<<endl<<"Deposit "<<i+1<<" = "<<array[i];
	}


}
int arraysum(int array[], int n)
{
	int sum = 0;
	//cout<<"enter the number of elements you want to add together :";
	//cin>>n;
	
	for(int i = 0; i < n; i++)
	sum += array[i];
	return sum;
}







