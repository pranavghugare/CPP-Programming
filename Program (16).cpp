#include<iostream>
using namespace std;

void Swap(float *p,float *q)
{
	float temp;
	
	temp=*p;
	*p=*q;
	*q=temp;		
}

int main()
{
	float x=0,y=0;
	
	cout<<"Enter First Number\n";
	cin>>x;
	
	cout<<"Enter Second Number\n";
	cin>>y;
	
	Swap(&x,&y);
	
	cout<<"Value of x becomes:"<<x<<"\n";
	cout<<"Value of y becomes:"<<y<<"\n";

	return 0;
}