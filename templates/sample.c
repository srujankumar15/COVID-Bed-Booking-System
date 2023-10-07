#include<stdio.h>
void main()
{
    char str[10];
    printf("Enter the String:");
    scanf("%s",str);
    int n=sizeof(str);
    printf("%d",n);

}