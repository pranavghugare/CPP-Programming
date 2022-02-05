////Accept two pos and Toggle that bitset

#include<iostream>

using namespace std;

int ToggleBit(int iNo,int iPos,int iPos1){
	int iMask1=0X00000001,iMask2=0X00000001,iMask=0;
	int iResult=0;
	
	iMask1=iMask1<<(iPos-1);
	iMask2=iMask2<<(iPos1-1);
	
	iMask=iMask1 | iMask2;
	
	iResult=iNo ^ iMask;
	return iResult;
}
int main()
{
	int iValue=0,i=0,j=0,iRet=0;
	cout<<"Enter Number\n";
	cin>>iValue;
	
	cout<<"Enter the first position of bit\n";
	cin>>i;
	cout<<"Enter the second position of bit\n";
	cin>>j;
	
	iRet=ToggleBit(iValue,i,j);
	
	cout<<"Updated Number is:"<<iRet<<"\n";
	return 0;
}