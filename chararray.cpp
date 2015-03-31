#include<iostream>
#include<string.h>
using namespace std;
void stringread(char []);
int main()
{
	char string1[]= "C++ programming language";
	char string2[]= "object oriented programming language";
	char string3[200]=" ";
	//cout<<string1<<endl;

	//strcpy(string1, string3);

	//cout<<string3<<endl;
	strcat(string1,string2);
	strcat(string1,string3);

	cout<<string2<<endl;
	
	strcat(string2, string1);

	//stringread(string3);
	//cout<<string1<<endl;
	return 0;
}
void stringread(char string[])
{
for(int i = 0; i<strlen(string); ++i)
	cout<<string[i];
}






