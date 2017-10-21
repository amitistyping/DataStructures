#include<iostream>
#include<conio.h>

using namespace std;

int bubblesort() //Git Command Line Testing
{
    //Testing Again
    //Again Testing
int arr[5], n=5, check;

for(int i=0;i<5;i++)
    cin>>arr[i];

    for(int i=0;i<n;n--)
    {
        for(int j=0;j<n;j++)
        {
         if((arr[j+1])<(arr[j]))
         {
          check=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=check;
         }
        }
    }

for(int i=0; i<5; i++)
    cout<<"/n"<<arr[i];

getch();
}
