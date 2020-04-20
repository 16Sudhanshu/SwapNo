#include<stdio.h>
void main()
{
	int a=19,b=91;
	printf("Intial values of numbers:a=%d,b=%d\n",a,b);//Old values
	a+=b;//a=110
	b=a-b;//b=19
	a-=b;//a=91
	printf("Now the numbers become: a=%d,b=%d",a,b);//New valus
}
