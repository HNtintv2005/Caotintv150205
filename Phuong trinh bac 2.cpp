#include<stdio.h>
#include<math.h>
#include <iostream>
#include <conio.h>
int main()
{
	float a,b,c,D,x1,x2,x;
	printf("\n Nhap vao he so a:");
	scanf("%d", &a);
	printf("\n Nhap vao he so b:");
	scanf("%d", &b);
	printf("\n Nhap vao he so c:");
	scanf("%d", &c);
	if (a=0)
	{
		printf("Phuong trinh co nghiem la x=-d/c");
		scanf("%d", &x);
		fflush(stdin);
	}
	else 
	{
		D=b*b-4*a*c;
	if (D>0)
	{
	printf("\n Phuong trinh co hai nghiem phan biet x1,x2");
	printf("x1=(-b+sqrt(D))/(2*a)");
	scanf("%d", x1);
	printf("x2=(-b-sqrt(D))/(2*a)");
	scanf("%d", x2);
	fflush(stdin);
}
    else if (D=0)
    {
    printf("\n Phuong trinh co nghiem kep x1=x2");
    printf("x1=x2=(-b)/(2*a)");
    scanf("%d", x1,x2);
    fflush(stdin);
    }
    if (D<0)
    {
    	printf("\n Phuong trinh vo nghiem");
    }
    return 0;
}
}
