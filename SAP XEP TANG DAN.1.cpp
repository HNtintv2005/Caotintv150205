#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
		}
	}while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
}

void hoanvi(int c,int d)
{
	int temp;
	c=temp;
	c=d;
	d=temp;
}

void sapxeptangdan(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
				hoanvi(a[i],a[j]);
		}
	}
	//Xuat
	for(j=0;j<n;j++)
	{
		printf("%4d",a[j]);
	}
}

int main()
{
	int n;
	int a[MAX];
	nhap(a, n);
	xuat(a, n);
	sapxeptangdan(a, n);
	getch();
	return 0;
}
