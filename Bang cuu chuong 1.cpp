#include <stdio.h>
int main()
{
	int a, n;
	do{
	printf("Nhap bang cuu chuong: ");
	scanf("%d", &n);
	}while(n<1 || n>9);
	for(a=1; a<=10; a++)
		printf("%d x %d = %d\n", n, a, a*n);
	return 0;
}
  
