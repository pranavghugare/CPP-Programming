using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class SinglyCL
{
private:
	PNODE first;
	PNODE last;
	int size;
	
public:
	SinglyCL()
	{
		first=NULL;
		last=NULL;
		size=0;
	}
	
	void Display()
	{
		
	}
	int Count()
	{
		
	}
	void InsertFirst(int no)
	{
		
	}
	void DeleteFirst(int no)
	{
		
	}
	void DeleteLast(int no)
	{
		
	}
	void DeleteAtPos(int iPos)
	{
		
	}
};

int main()
{
	SinglyCL obj;
	int iRet=0;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.InsertLast(101);
	
	obj.Display();
	iRet=obj.Count();
	cout<<"Number of Element are:"<<iRet;
	return 0;
}