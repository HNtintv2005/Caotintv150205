#include<stdio.h>
int main() {

   int i, j, mat[10][10], row, col;
   int sum = 0;

   printf("Nhap so hang cua ma tran: ");
   scanf("%d", &row);

   printf("Nhap so cot cua ma tran: ");
   scanf("%d", &col);

   //Nhap cac phan tu cua ma tran m x n
   printf("Nhap ma tran: ");
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         printf("Nhap phan tu a[%d][%d] : ", i, j);
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
   printf("Tong duong cheo cua ma tran la: %d", sum);

   return (0);
}
