#include<iostream>

using namespace std;

class Marvellous
{
	public:
			int Addition(int x,int y)
			{
				int iAns=0;
				iAns=x+y;
				return iAns;
			}
};
int main()
{
	int iNo1=0,iNo=0,iRet=0;
	Marvellous mobj;		// Marvellous mobj=new Marvellous();
	
	cout<<"Enter First Number\n";
	cin>>iNo;		//scanf();
	cout<<"Enter Second Number\n";
	cin>>iNo1;
	iRet=mobj.Addition(iNo,iNo1);
	
	cout<<"Addition is:"<<iRet<<"\n";
	
	return 0;
}