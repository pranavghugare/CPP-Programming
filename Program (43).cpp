#include<iostream>
#include<stdbool.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head,int no)
{
	PNODE temp=*Head;
	PNODE newn=new NODE;
	
	newn->data=no;
	newn->lchild=NULL;
	newn->rchild=NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while(1) //uncditional loop  for(; ;)
		{
			if(temp->data=no)
			{
				cout<<"Dublicate Node";
				delete(newn);
				break;
			}
			else if(temp->data<no) //big data
			{
				if(temp->rchild==NULL)
				{
					temp->rchild=newn;
					break;
				}
				temp=temp->rchild;
			}
			else if(temp->data>no) //less than
			{
				if(temp->lchild==NULL)
				{
					temp->lchild=newn;
					break;
				}
				temp=temp->lchild;
			}
		}
	}
}

bool Search(PNODE Head,int no)
{
	bool flag=false;
	if(Head==NULL)  	//if tree is empty
	{
		return false;
	}
	else	//tree contains atleast one node
	{
		while(1)
		{
			if(Head->data==no)	//node found
			{
				flag=true;
			}
			else if(no>(Head->data))
			{
				Head=Head->rchild;
			}
			else if(no<(Head->data))
			{
				Head=Head->lchild;
			}
		}
		return flag;
	}
}
	
int main()
{
	PNODE first=NULL;
	int no=0;
	bool bRet=false;
	Insert(&first,51);
	Insert(&first,21);
	Insert(&first,101);
	
	cout<<"Enter number to search\n";
	cin>>no;
	
	bRet=Search(first,no);
	if(bRet==true)
	{
		cout<<"Data is there\n";
	}
	else{
		cout<<"Data is not there\n";
	}
	
	return 0;
}