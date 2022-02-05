////

#include<iostream>
using namespace std;

int SumR(int iNo)
{
	static int iSum=0;
	
	if(iNo!=0)
	{
		iSum=iSum+(iNo%10);
		iNo=iNo/10;
		SumR(iNo);
	}
	return iSum;
}
int main()
{
	int x=0,iRet=0;
	
	cout<<"Enter Number\n";
	cin>>x;
	
	iRet=SumR(x);
	
	cout<<"Summation of Digits:"<<iRet<<"\n";
	
	return 0;
}