#include<iostream>

using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE , *PNODE , PPNODE;

class SinglyLL
{
	private:
		PNODE first;
		int iSize;
		
	public:
		SinglyLL()
		{
			first=NULL;
			iSize=0;
		}
	
		void InsertFirst(int no)
		{
			PNODE newn=new NODE;
			
			newn->data=no;
			newn->next=NULL;
			
			if(first==NULL)
			{
				first=newn;
			}
			else{
				newn->next=first;
				first=newn;
			}
			iSize++;
		}
		void InsertLast(int no)
		{
			PNODE newn=new NODE;
			
			newn->data=no;
			newn->next=NULL;
			
			if(first==NULL)
			{
				first=newn;
			}
			else
			{
				PNODE temp=first;
				
				while(temp->next!=NULL)
				{
					temp->next=newn;
				}
				temp->next=newn;		
			}
			iSize++;
		}
		void InsertAtPos(int no,int ipos)
		{
			
		}
		void DeleteFirst(int no)
		{
			PNODE temp=first;
			
			if(first2!=NULL)
			{
				first=first->next;
				delete temp;
				
				iSize--;
			}
		}
		void DeleteLast(int no)
		{
			PNODE temp=first;
			
			if(first == NULL)
			{
				return ;
			}
			else if(first->next == NULL)
			{
				delete first;
				first=NULL;
				iSize--;
			}
			else
			{
				while(temp->next->next!=NULL)
				{
					temp=temp->next;
				}
				
				delete temp->next;
				temp->next=NULL;
				iSize--;
			}
		}
		void DeleteAtPos(int no)
		{
			
		}
		void Display()
		{
			PNODE temp=first;
			while(temp!=NULL)
			{
				cout<<temp->data<<"\t";
				temp=temp->next;
			}
		}
		int Count()
		{
			return iSize;
		}
};
int main()
{
	SinglyLL obj;
	int iRet=0;
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.InsertLast(101);
	obj.Display();
	
	iRet = obj.Count();
	cout<<"Number of elments are: "<<iRet<<"\n";
	return 0;
}