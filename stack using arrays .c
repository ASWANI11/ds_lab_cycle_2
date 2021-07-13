
#include<stdio.h>
 
int nTop=-1;
int *pStack = NULL;
/*
nTop: To refer topmost element in array.
 
pStack: pointer to array that 
can be implemented as stack pointer
*/
/*
Push new element 
at the top of linked list
*/
void push(int n)
{
  printf("\nPush element: %d", n);
  if(nTop>9)
  printf("Overflow");
  else
  {
    nTop++;
    pStack[nTop] = n;
  }
}
/*
Pop topmost element 
from stack
*/
 
void pop()
{
  printf("\nPop topmost element");
  if(nTop<0)
  printf("\nUnderflow");
  else
  {
    pStack[nTop] = -1;
    nTop--;
   }
}
 
void DisplayStack()
{
  int i=0;
  if(nTop<0)
  printf("\nStack is empty");
  else
  {
    printf("\nDisplay Stack: ");
    for(; i<=nTop;i++)
    printf("%d ", pStack[i]);
  }
}
 
int main()
{
  int nSize=10;
  /*
    allocate dynamic memory of size 10 int
    to store 10 elements 
  */
  pStack = (int *)malloc(sizeof(int)*10); 
     
  push(10);
  push(12);
  DisplayStack();
  pop();
  DisplayStack();
  push(45);
  push(24);
  push(12);
  DisplayStack();
  pop();
  pop();
  DisplayStack();
}
