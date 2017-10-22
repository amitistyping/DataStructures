//Understanding Linear Search In Simple Array

#include<iostream>
#include<conio.h>


using namespace std;


int lxp()
{
    int arr[5], x, i, c=6;

    cout<<"This program can search through an Array \nPlease, enter 5 numbers\n";

    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter a number that you'd like to search through this Array.";
    cin>>x;
    for(i=0;i<5;i++)
    {
        if(arr[i]==x)
        {
          arr[i]==c;
          cout<<"Found your number at position\n";
          cout<< i+1;
        }
    }

    if(!(i==c))
    cout<<"Sorry folks, your number does not exist in this array";

getch();
return 0;

}



