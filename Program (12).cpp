//Swap the first to last bit
#include<iostream>

using namespace std;
typedef unsigned int UNIT;
UNIT SwapBit(UNIT iNo){
	UNIT iMask=0X00FFFF00;
	UNIT iTemp=iNo & iMask;
	
	UNIT Byte1=iNo<<24;
	UNIT Byte4=iNo>>24;
	
	UNIT iResult=iTemp | Byte1 |Byte4;
}
int main()
{
	UNIT iValue=0,iRet=0,i=0,j=0;
	cout<<"Enter Number\n";
	cin>>iValue;
	
	iRet=SwapBit(iValue);
	
	cout<<"Updated is:"<<iRet<<"\n";
	return 0;
}