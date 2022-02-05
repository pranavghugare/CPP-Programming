//////////Recursion


//in recurssion use variable which is used all over
#include<iostream>
using namespace std;
/*void DisplayI()
{
	int iCnt=1;
	while(iCnt<=4)
	{
		cout<<"Marvellous\n";
		iCnt++;
	}
}*/

void DisplayR()
{
	int iCnt=1;	// in static variable are stored in whole function
	
	if(iCnt<=4)
	{
		cout<<"Marvellous\n";
		iCnt++;
		DisplayR();
	}
}
int main()
{
	DisplayR();
	
	return 0;
}