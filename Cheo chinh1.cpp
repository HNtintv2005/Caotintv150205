#include<stdio.h>

int main() 
{
   int i, j, mat[10][10], row, col;
   int sum = 0;

   printf("\nNhap so hang cua ma tran: ");
   scanf("%d", &row);

   printf("\nNhap so cot cua ma tran: ");
   scanf("%d", &col);

   //Nhap cac phan tu cua ma tran m x n
   printf("\nNhap ma tran: \n");
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         printf("\nNhap phan tu a[%d][%d] : ", i, j);
         scanf("%d", &mat[i][j]);
      }
   }

   //Cong tat ca phan tu tren duong cheo chinh
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         if (i == j)
            sum = sum + mat[i][j];
      }
   }

   //Hien thi ket qua
   printf("\nTong duong cheo cua ma tran la: %d", sum);

   return (0);
}
