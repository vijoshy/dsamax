#include<iostream>
using namespace std;

class stack
{
private:
    int stk[10];
    int size;
    int top;
public:
    void initialize()
    {
        size=5;
        top=-1;
    }
    void push();
    void pop();
    void display();
};
void stack::push()
{
    int value;
    cout<<"enter the element to be pushed"<<endl;
    cin>>value;
    if(top==size)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        top=top+1;
        stk[top]=value;
        cout<<"the element "<<value<<" is inserted at the top of stack"<<endl;
    }
}
void stack::pop()
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
        {
        int value;
        value=stk[top];
        top=top-1;
        cout<<"the value popped is "<<value<<endl;
        }
}
void stack::display()
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"the present stack elements are "<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<stk[i]<<endl;
        }
    }

}
main()
{
    stack s;
    s.initialize();
    int rpt=1,choice;
    while(rpt)
    {
      cout<<"********************************"<<endl;
      cout<<"enter 1 to push()"<<endl;
      cout<<"enter 2 to pop()"<<endl;
      cout<<"enter 3 to display()"<<endl;
      cout<<"********************************"<<endl;
      cout<<"enter ur choice"<<endl;
      cin>>choice;
      switch(choice)
      {
      case 1:
        s.push();
        break;
      case 2:
        s.pop();
        break;
      case 3:
        s.display();
        break;
      }
      cout<<"do u want to repeat? if yes press 1, else press 0"<<endl;
      cin>>rpt;
    }
}
