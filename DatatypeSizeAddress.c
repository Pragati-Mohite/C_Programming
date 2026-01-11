#include<stdio.h>
int main()
{
    char cValue='S';
    int iValue= 11;
    float fValue= 90.78f;
    double dValue= 98.564323;
    printf("size of character is: %d \n",sizeof(cValue));
    printf("size of integer is: %d \n",sizeof(iValue));
    printf("size of float is: %d \n",sizeof(fValue));
    printf("size of double is: %d \n",sizeof(dValue));

    printf("Address of cValue: %d \n",&cValue);
    printf("Address of iValue: %d \n",&iValue);
    printf("Address of fValue: %d \n",&fValue);
    printf("Address of dValue: %d \n",&dValue);

    return 0;
}