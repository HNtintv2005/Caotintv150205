#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define MAX 100
void NhapMang(int a[][MAX], int &dong, int &cot)
{
    //Nhap so dong
    do
    {
        printf("\nNhap vao so dong: ");
        scanf("%d",&dong);

        if(dong < 1 || dong > MAX)
        {
            printf("\nSo dong khong hop le. Xin kiem tra lai!");
        }

    }while(dong < 1 || dong > MAX);

    do
    {
        printf("\nNhap vao so cot: ");
        scanf("%d",&cot);

        if(cot < 1 || cot > MAX)
        {
            printf("\nSo cot khong hop le. Xin kiem tra lai!");

        }

    }while(cot < 1 || cot > MAX);


    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMang(int a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%4d", a[i][j]);
        }
            printf("\n\n");
    }
}

int TimPhanTuNhoNhatDong(int a[][MAX], int vtdong, int vtcot, int dong, int cot)
{
    int x = a[vtdong][vtcot];
    for(int i = 0; i < cot; i++)
    {
        if(a[vtdong][i] < x)
        {
            return false;
        }
    }
    return true;
}

int TimPhanTuLonNhatCot(int a[][MAX], int vtdong, int vtcot, int dong, int cot)
{
    int x = a[vtdong][vtcot];
    for(int j = 0; j < dong; j++)
    {
        if(a[j][vtcot] > x)
        {
            return false;
        }
    }
    return true;
}

void DemSoPhanTuYenNgua(int a[][MAX], int dong, int cot)
{
    int dem = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(TimPhanTuNhoNhatDong(a, i, j, dong, cot) && TimPhanTuLonNhatCot(a, i, j, dong, cot))
            {
                printf ("A[%d][%d] = %d la mot diem yen ngua \n", i, j, a[i][j]);
                dem++;
            }
        }
    }
    printf("\nSo phan tu yen ngua la %d", dem);
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    DemSoPhanTuYenNgua(a, dong, cot);
    getch();
    return 0;
}
