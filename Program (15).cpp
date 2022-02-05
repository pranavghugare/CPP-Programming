#include<iostream>
using namespace std;

void Swap(int *p,int *q)
{
	int temp;
	
	temp=*p;
	*p=*q;
	*q=temp;		
}

int main()
{
	int x=0,y=0;
	
	cout<<"Enter First Number\n";
	cin>>x;
	
	cout<<"Enter Second Number\n";
	cin>>y;
	
	Swap(&x,&y);
	
	cout<<"Value of x becomes:"<<x<<"\n";
	cout<<"Value of y becomes:"<<y<<"\n";

	return 0;
}