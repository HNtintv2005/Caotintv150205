#include<conio.h>
#include<stdio.h>
void Nhap(int a[][10],int M,int N)
{
 int i,j;
 for(i=0;i<M;i++)
 for(j=0; j<N; j++)
 {
 printf("Phan tu o dong %d cot %d: ",i,j);
 scanf("%d",&a[i][j]);
 }
}
void InMaTran(int a[][10], int M, int N)
{
 int i,j;
 for(i=0;i<M;i++)
 {
 for(j=0; j< N; j++)
 printf("%d ",a[i][j]);
 printf("\n");
 }
}
/* Cong 2 ma tran A & B ket qua la ma tran C*/
void CongMaTran(int a[][10],int b[][10],int M,int N,int c[][10])
{
 int i,j;
 for(i=0;i<M;i++)
 for(j=0; j<N; j++)
 c[i][j]=a[i][j]+b[i][j];
}
int main()
{
	int a[10][10], b[10][10], M, N;
 int c[10][10];/* Ma tran tong*/
 printf("So dong M= "); scanf("%d",&M);
 printf("So cot N= "); scanf("%d",&N);
 printf("Nhap ma tran A\n");
 Nhap(a,M,N);
 printf("Nhap ma tran B\n");
 Nhap(b,M,N);
 printf("Ma tran A: \n");
 InMaTran(a,M,N);
 printf("Ma tran B: \n");
 InMaTran(b,M,N);
 CongMaTran(a,b,M,N,c);
 printf("Ma tran tong C:\n");
 InMaTran(c,M,N);
 getch();
 return 0;
}
