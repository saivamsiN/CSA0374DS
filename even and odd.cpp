#include<stdio.h>
int main()
(
int a[8],even=0,odd=0;
printf("enter 8 numbers:\n");
for(i=0;i<8;i++)
scanf("%d",&a[i]);
for(i=0;i<8; i++)
{
	if(a[i]%2==0)
	even=even+a[i];
	else
	odd=odd+a[i];
}
printf("\n sum of even numbers=%d",even);
printf("\n sum of odd numbers=%d",odd);
return 0;
)
