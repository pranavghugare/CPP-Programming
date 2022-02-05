#include<iostream>
using namespace std;

void Swap(char *p,char *q)
{
	char temp;
	
	temp=*p;
	*p=*q;
	*q=temp;		
}

int main()
{
	char x=' ',y=' ';
	
	cout<<"Enter First character\n";
	cin>>x;
	
	cout<<"Enter Second character\n";
	cin>>y;
	
	Swap(&x,&y);
	
	cout<<"Value of x becomes:"<<x<<"\n";
	cout<<"Value of y becomes:"<<y<<"\n";

	return 0;
}