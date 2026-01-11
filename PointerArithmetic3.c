#include<stdio.h>
int main()
{
    int Arr[]={11,21,51,101,111};
    
    int *p = NULL;
    int *q = NULL;

    p= &(Arr[1]);
    q= &(Arr[4]);

    //p+q;         //not allowed

    p=p+3;         //allowed
    printf("Data Pointed By p is: %d\n",*p);

    printf("Result of substraction is :%ld\n",q-p);         //Allowed

    q=q-2;
    printf("data pointed by q is:%d\n",*q);    //allowed

    return 0;
}