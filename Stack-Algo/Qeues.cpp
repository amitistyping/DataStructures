//Basic operations of Queues

#include<iostream>
#include<conio.h>

void addq();
void iffull();
void ifempty();
int dequeue();

int que[10];

using namespace std;

int fro=0,rear=0;

int q()
{
   int choice;
   cout<<"Enter 1 for Enqueue, 2 for DeQueue, 3 For if-full and 4 for if-empty \t";
   cin>>choice;
   switch(choice)
   {
   case 1:
    addq();
    break;
   case 2:
    dequeue();
    cout<<"Now the front element is:"<<que[fro];
    q();
    break;
   case 3:
    iffull();
    break;
   case 4:
    ifempty();
   default:
    cout<<"\n Wrong choice";
   }
    return 0;
}

void addq()
{
    int item;

    if(rear<10)
    {
        for(int i=rear;i<10;i++)
        {
        cout<<"\n Enter the element \t";
        cin>>item;
        que[rear]=item;
        rear++;
        }
    }
    else
        cout<<"Queue overflow....";
        q();
}

int dequeue()
{
return que[++fro];
}

void ifempty()
{
    if(rear<=fro)
        cout<<"The Queue is empty";
    else
        cout<<"Queue is not empty";
    q();
}

void iffull()
{
    if(rear==10)
        cout<<"Queue is full";
    q();
}














