#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void NhapMang(float a[][MAX], int &dong, int &cot)
{
    //Nh?p s? dòng
    do
    {
        printf("\nNhap vao so dong: ");
        // Cách tà d?o: scanf("dong =%d",&dong);  // Lúc nh?p ph?i vi?t thêm  ch? ( dong =  ) ? khung console
        scanf("%d",&dong);

        if(dong < 1 || dong > MAX)
        {
            printf("\nSo dong khong hop le. Xin kiem tra lai!");
        }

    }while(dong < 1 || dong > MAX);

    //Nh?p s? c?t
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
            float temp;
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%f", &temp);
            a[i][j] = temp;
        }
    }
}

void XuatMang(float a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%8.3f", a[i][j]);
        }
            printf("\n\n");
    }
}
void HoanVi(float &a, float &b)
{
    a = a + b; // Cho d?i
    b = a - b;  // 
    a = a - b;  // l?y trên tr? du?i
}
void SapXepKhongDungMangPhu(float a[][MAX], int dong, int cot)
{
    int n = dong * cot;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i / cot][i % cot] > a[j / cot][j % cot])
            {
                HoanVi(a[i / cot][i % cot], a[j / cot][j % cot]);
            }
        }
    }
}

void SapXepDungMangPhu(float a[][MAX], int dong, int cot)
{
    // Bu?c 1: Ð? d? li?u t? m?ng 2 chi?u qua m?ng 1 chi?u (m?ng ph?)
    float temp[MAX];
    int idx = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            temp[idx++] = a[i][j];
        }
    }

    // Bu?c 2: S?p x?p m?ng 1 chi?u tang d?n
    for(int i = 0; i < idx - 1; i++)
    {
        for(int j = i + 1; j < idx; j++)
        {
            if(temp[i] > temp[j])
            {
                HoanVi(temp[i], temp[j]);
            }
        }
    }

    // Bu?c 3: Ð? l?i d? li?u t? m?ng 1 chi?u sang m?ng 2 chi?u
    idx = 0; // Reset l?i ch? s? m?ng ph?

    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            a[i][j] = temp[idx++];
        }
    }
}
int main()
{
    float a[MAX][MAX];
    int dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    SapXepDungMangPhu(a, dong, cot);
    printf("\nMang sau khi sap xep\n");
    XuatMang(a, dong, cot);
    getch();
    return 0;
}
