#include<iostream>

using namespace std;
void fourprint(int [], int);
int main()
{
	int arr[16]= {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1};

	fourprint(arr,16);

	return 0;
}

void fourprint(int array[], int arraysize)
{
	for(int i = 0; i<arraysize;++i)
	{
		cout<<array[i];

		if ((i+1) % 4 == 0)
			cout<<endl;
	}

}