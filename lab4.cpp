#include <stdio.h>

int main()
{
int a;
int b;
int left=1;
int right=100;
scanf("%d",&a);

printf((left <= a && a <= right) ? "True\n" : "False\n");

scanf("%d",&b);
printf("%d",(b»2)&1);
return 0;
}