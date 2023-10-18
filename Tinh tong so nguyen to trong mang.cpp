#include<stdio.h>
#include<conio.h>
  int main()
  {
  int a[10],n;
  printf("Nhap so phan tu cua mang:");
  scanf("%d" , &n);
  for ( int i=0; i<n ; i++)
  {
  	printf("Gia tri cua mang a[%d]:" , i);
  	scanf("%d" , &a[i]);
  	}
  	printf("\n So phan tu khi nhap vao mang la:\n");
  	for(int i=0; i<n; i++)
  	{
  		printf("a[%d]=%d \n", i,a[i]);
  		}
  		int max = a[0];
  	   for (int i=0; i<n; i++){
  	   	if(max<a[i])
  	   	{
  	   		max = a[i];
  	   		}
  	   	    }
  	   	    printf("Gia tri lon nhat la:%d", max);
  	   	    return 0;
  	}

