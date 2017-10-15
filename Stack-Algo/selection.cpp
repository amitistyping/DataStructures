//Program for selection sort.
#include<iostream>
#include<conio.h>

using namespace std;

int select()
{
    int arr[10],temp;
    cout<<"Enter any ten integers in array one by one \n";

    for(int i=0;i<10;i++)
        cin>>arr[i];

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
           if((arr[i+1])<(arr[j]))
           {
            temp=arr[j];
            arr[j]=arr[i+1];
            arr[i+1]=temp;
           }
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<"\n"<<arr[i];
    }

    getch();
}

