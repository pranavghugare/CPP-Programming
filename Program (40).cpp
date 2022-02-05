#include<iostream>
#include<stdio.h>

using namespace std;



int main()
{
	char Arr[20];
	
	cout<<"Enter String\n";
	scanf("%[^'\n']s",Arr);
	
	int iRet=CountCapR(Arr);
	
	cout<<"Length of String is:"<<iRet<<"\n";
	
	return 0;
}
	