#include<iostream>
#include<stdio.h>

using namespace std;

int strlenR(char *str)
{
	static int iCnt=0;
	
	if(*str!=0)
	{
		iCnt++;
		str++;
		strlenR(str);
	}
	return iCnt;
}
int main()
{
	char Arr[20];
	
	cout<<"Enter String\n";
	scanf("%[^'\n']s",Arr);
	
	int iRet=strlenR(Arr);
	
	cout<<"Length of String is:"<<iRet<<"\n";
	
	return 0;
}
	