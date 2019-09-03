#include<iostream>
#define max 100
using namespace std;
class sta
{
  int top;
  int a[max];
  public:
  sta()
  {
  	top=-1;
  }
  void push(int x)
  {
  	if(top==max-1)
  	cout<<"STACK OVERFLOW\n";
  	else
  	a[++top]=x;
  }
  void pop()
  {
  	if(top==-1)
  	cout<<"EMPTY STACK\n";
  	else
  	top--;

  }
  bool isempty()
  {
  	if(top==-1)
  	return true;
  	else
  	return false;
  }
  void display()
  {
  	int i=top;
  	while(i!=-1)
  	cout<<a[i--]<<" \n";
  }
  };
  int main(void)
  {
   sta s;
   m=0;
   int k=3;
   int a;
   while(k!=0)
   {
   	cout<<"_________MENU__________\n\n\n";
   	cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.TO CHECK IF STACK IS EMPTY\n0.EXIT\n";
   	cout<<"_______________________\nENTER YOUR CHOICE:";
   	cin>>k;
   	cout<<"\n\n\n";
   	if(k==1)
   	{
   		cout<<"ENTER THE ELEMENT TO BE PUSHED:";
   		cin>>a;
   		s.push(a);
	}
	if(k==2)
	{
		s.pop();
	}
	if(k==3)
	{
		s.display();
	}
	if(k==4)
	{
		cout<<"LIST IS EMPTY \n"<<s.isempty()<<endl;
	}
	else
	continue;
   }
  cout<<"\n_________________TERMINATED_________________________";
  }
