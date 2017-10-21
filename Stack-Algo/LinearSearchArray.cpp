//This program is made to perform a simple linear search on arrays, which compares each the value given by user to the each value present in the array.

#include <iostream>
#include <conio.h>

using namespace std;

int linearsearch()
{
int a[10], i, c, z;

cout<<"Array can support up to 10 numbers.";
cout<<"Please, enter the numbers";

for(i=0;i<10;i++)
{
cin>>a[i];
}

cout<<"Enter the number you want to search";
cin>>c;

for(i=0;i<10;i++)
{
    if (c==a[i])
    {
         z=c;
        cout<<"The number has been found at:"<<i;
    }
}

if (!(z==c))//i will be incremented till 10 if the number isn't found through whole array.
    cout<<"The number wasn't found, sorry!";

getch();
return 0;
}
