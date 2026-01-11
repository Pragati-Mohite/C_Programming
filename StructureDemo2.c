#include<stdio.h>

struct Demo
{
    int i;
    int j;
    float f;
};
int main()
{
    struct Demo obj;
    
    obj.i=11;
    obj.f=90.4f;
    obj.j=21;

    printf("%d \n",obj.i);
    printf("%d \n",obj.j);
    printf("%f \n",obj.f);

    return 0;
}