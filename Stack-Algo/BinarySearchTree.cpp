#include<iostream>
#include<conio.h>

//This program creates, traverse, search and insert in a "Binary Search Tree".
//This pointer (->) has been used to implement this.

struct node //Creating node structure
{
    int data;
    struct node *leftchild; //Points to another structure of same blueprint.
    struct node *rightchild;
};


