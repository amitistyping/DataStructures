//This program performs binary search in the arrays.
//For Binary search the numbers shall be in ascending order.
#include<iostream>
#include<conio.h>

using namespace std;


int binary()
{
    int array[10], check, number;

    for(int i=0;i<10;i++)
    {
        cout<<"Enter numbers in ascending order only:\t";
        cin>>array[i];
    }

    cout<<"Enter the number for comparison: \t";
    cin>>number;



    if(number<=array[4])//If no is smaller or equal then the mid point, then this is executed.
        {
            for(int i=0;i<=4;i++)
            {
             if(number==array[i])
              {
               cout<<"The number was found at:\t"<<i+1<<"\t";
               check=number;
               break;
              }
            }
        }

    else//If no is bigger then the mid point, this is executed.
        {
           for(int i=5;i<10;i++)
                {
                if(number==array[i])

            {
                cout<<"The number was found at:"<<i+1<<"\t";
                check=number;
                break;
            }
                }

       }

    if(!(number==check))//If no doesn't exist, this is executed.
            cout<<"The number doesn't exist in the array";

       getche();
       return 0;
}

