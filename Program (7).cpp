#include<iostream>

using namespace std;
typedef unsigned int UNIT;
int ToggleNibble(UNIT iNo){
	//int iMask1=0X0000000f,iMask2=0Xf0000000,iMask=0;	
	//iMask=iMask1 | iMask2;
	//iReslut=0;
	//iReslut=iNo ^ iMask;

	UNIT iMask=0Xf000000f;
	UNIT iReslut=iNo^iMask;
	return iReslut;
}
int main()
{
	UNIT iValue=0,iRet=0;
	cout<<"Enter Number\n";
	cin>>iValue;
	iRet=ToggleNibble(iValue);
	
	cout<<"Updated Number is:"<<iRet<<"\n";
	return 0;
}