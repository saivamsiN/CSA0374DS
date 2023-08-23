#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("enter the three different numbers");
	scanf("%1f %1f %1f ",&n1,&n2,&n3);
	if(n1>=n2 && n1>=n3){
		printf("%.2f the largest number is n1",n1);
	}
		if (n2>=n1 && n2>=n3)
		{
			printf("%.2f the largest is n2 ",n2);
		}
		else
		{
			printf("%.2f the largest is n3",n3);
		}
		return 0;
	 
}
