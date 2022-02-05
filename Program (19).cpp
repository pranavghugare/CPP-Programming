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
	char x='A',y='C';
	SwapX(&x,&y);
	int i=11,j=21;
	SwapX(&i,&j);
	//cout<<"Enter First character\n";
	//cin>>x;
	
	//cout<<"Enter Second character\n";
	//cin>>y;
	
	//SwapX(&x,&y);
	
	cout<<"Value of x becomes:"<<x<<"\n";
	cout<<"Value of y becomes:"<<y<<"\n";

	cout<<"Value of x becomes:"<<i<<"\n";
	cout<<"Value of y becomes:"<<j<<"\n";

	return 0;
}