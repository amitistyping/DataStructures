#include <iostream>
#include<conio.h>




const int max=7;
int t=0;


using namespace std;

class stack
{
int s[7];
public:
    void push(int);
    void pop();
    void top();
    void empty();
    void show();
};

void stack::push(int y)
{
    beep();
    if(t<max)
    {
    s[t]=y
    t=t+1;
    }
    else
        cout<<endl<<"Stack Overflows.."<<endl;
}

void stack::pop()
{
   int item;
   if(t>=0)
   {
       t=t-1;
       item=s\[t+1];
       cout<<endl<<"Popped Item.."<<item<<endl;
   }
}

void stack::top()
{
    if(t>=0)
        cout<<endl<<"The top of the stack element is:"<<s[t]<<endl;
    else
        cout<<endl<<"Stack Underflows..."<<endl;
}

void stack::empty()
{
    if(t<0)
        cout<<endl<<"Stack is empty.."<<endl;
    else
        cout<<endl<<"Stack is empty.."<<endl;
}






int main()
{
    int a,x;
    stack s1;
    clrscr();
    do
    {
        cout
    }
    }
    return 0;
}
