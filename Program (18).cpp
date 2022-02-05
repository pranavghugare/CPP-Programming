/////Generic Function //////////

#include<iostream>
using namespace std;

//Specific Function
void Swap(char *p,char *q)
{
	char temp;
	
	temp=*p;
	*p=*q;
	*q=temp;		
}

//Generic Function
template<class T>
void SwapX(T *p,T *q)
{
	T temp;
	
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
	
	SwapX(&x,&y);
	
	cout<<"Value of x becomes:"<<x<<"\n";
	cout<<"Value of y becomes:"<<y<<"\n";

	return 0;
}