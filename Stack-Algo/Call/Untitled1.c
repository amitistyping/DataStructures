
#include<stdio.h>
#include<conio.h>

int add(int,int);

main()
{
int a,b;
printf("Enter your two numbers \n");
scanf("%d %d",&a, &b);
printf("Your result is: %d", add(a,b));
return 0;
}

int add(int x, int y)
{
    x=y+x;
    return x;
}





