#include<stdio.h>
void even(int n);
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    printf("first %d even natural numbers:\n",n);
    even(n);
}
void even(int n)
{
    if(n>0){
        even(n-1);
        printf("%d\n",2*n);
    }
}