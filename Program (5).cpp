//count the On bit
#include<iostream>
using namespace std;

int CountBit(int iNo)
{
	int i=0,iCnt=0,iResult=0;
	int iMask=0X00000001;
	
	for(i=1;i<32;i++)
	{
		iResult = iNo & iMask;
		if(iResult!=0)//if((iNo & iMask)==iMask)
		{
			iCnt++;
		}
		iMask=iMask<<1
		
		//00000001
		//00000010
		//00000100
	}
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	iRet=CountBit(iValue);
	
	cout<<"Number of bit which are ON:"<<iRet<<"\n";
	return 0;
}