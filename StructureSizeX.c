#include<stdio.h>

struct Demo
{
    int i;
    char ch1;
    int j;
    char ch2;
    float f;
};
int main()
{
    printf("size of structure is : %lu\n",sizeof(struct Demo));
    return 0;
}