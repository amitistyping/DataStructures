//This program performs binary search in the arrays.

#include<iostream>
#include<conio.h>


main()
{
    int array[10], check, number;

    for(int i=0,i<10,i++)
    {
        cout<<"Enter number:"<</t<<i+1;
        cin>>array[i];
    }

    cout<<"Enter the number for comparison";
    cin>>number;

    if(number=array[4])
        cout<<"The number was found at the position 5";
    if(number<array[4])
        {
            for(i=0,i<4,i++)

        if(number==array[i])
        {
            cout<<"The number was found at:"<</t<<i+1;
        }
        }


    else
        {
           for(i=4,i<10,i++)
                {
                if(number==array[i])

            {
                cout<<"The number was found at:"<</t<<i+1;
            }
                }

       }
       getche();
       return 0;
}

