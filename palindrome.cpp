#include<iostream>
#include<string.h>

using namespace std;
void checkpalindrome(char []);
void paly(char []);
int main()
{
	char str1[40];
	cout<<endl<<"enter a string :";
	cin>>str1;
	//checkpalindrome(str1);
	paly(str1);



	return 0;
}

void checkpalindrome(char str[])
{
	char backstr[strlen(str)];
	int a=0;
	for (int i = strlen(str); i >= 0; --i)
	{
		backstr[a]=str[i-1];
		a++;
	}
	if (strcmp(str, backstr) == 0)
		cout<<endl<<"this is a palindrome!";
	else
		cout<<endl<<"this is not a palindrome";
	cout<<endl;
}


void paly(char str[])
{
	int a = strlen(str)-1;
	int i = 0;
	bool test = true;
	while(i < strlen(str))
	{
		if(str[a] != str[i])
			test = false;
		--a;
		++i;
	}
	if(test)
		cout<<endl<<"this is a palindrome"<<endl;
	else
		cout<<endl<<"not a palindrome"<<endl;

}