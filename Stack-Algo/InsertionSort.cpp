//This program illustrates insertion sort using arrays.
#include<iostream>
#include<conio.h>

using namespace std;

int insertion()
{
    int arr[10];
    int i,j,temp;
    cout<<"Please, enter integers in any order \a";

    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<10;i++)
    {
        for(j=i;j>=1;j--)
        {
            if((arr[j])<(arr[j-1]))
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            else
                break;
        }
    }

    cout<<"Sorted Array \n";
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }
    getch();
    return 0;
}
