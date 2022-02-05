//print seprate bits
#include<iostream>

using namespace std;
typedef unsigned int UNIT;
void DisplayBit(UNIT iNo){
	UNIT Byte1 =iNo & 0x000000ff;
	
	UNIT Byte2 =iNo & 0x0000ff00;
	Byte2=Byte2<<8;
	UNIT Byte3 =iNo & 0x00ff0000;
	Byte3=Byte3<<16;
	UNIT Byte4 =iNo & 0xff000000;
	Byte4=Byte4<<24;
	
	cout<<"Byte1:"<<Byte1<<"\n";
	cout<<"Byte2:"<<Byte2<<"\n";
	cout<<"Byte3:"<<Byte3<<"\n";
	cout<<"Byte4:"<<Byte4<<"\n";
}
int main()
{
	UNIT iValue=0,iRet=0,i=0,j=0;
	cout<<"Enter Number\n";
	cin>>iValue;
	DisplayBit(iValue);
	return 0;
}