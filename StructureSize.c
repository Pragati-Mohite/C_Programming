#include<stdio.h>

struct Demo
{
    int i;
    char ch;
    int j;
    float f;
};
int main()
{
    printf("size of structure is : %lu\n",sizeof(struct Demo));
    return 0;
}