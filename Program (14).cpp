
#include<iostream>
using namespace std;

int SumI(int Arr[],int iSize)
{
	int iSum=0,i=0;
	
	for(i=0;i<iSize;i++)
	{
		iSum=iSum+Arr[i];
	}
	return iSum;
}
int main()
{
	int iLength=0,i=0;
	int *p=NULL;
	
	cout<<"Enter Number of Elemnets\n";
	cin>>iLength;
	
	p=new int [iLength];
	
	cout<<"Enter the Elemnets\n";
	for(i=0;i<iLength;i++)
	{
		cin>>p[i];
	}
	
	int iRet=SumI(p,iLength);
	cout<<"Addition is:"<<iRet<<"\n";
	delete []p;
	return 0;
}