#include<stdio.h>
int main()
{
    //khai bao bien N
    int N;
    //khai bao bien S
    int S=0;
    do
    {    // nhap du lieu gan vao bien N
        printf("\nNhap N = ");
        scanf("%d", &N);
        if(N <= 0)//neu N<=0 se hien thi cau lenh
        {
            printf("\n N phai > 0. Xin nhap lai !");
        }
    }while(N <= 0);//dieu kiên N > 0 neu N<=0 yeu cau nhap lai
    
    int i=1;//i bat dau tu 1
    while(i<=N-1)//dieu kien dung khi i<=N-1
    {
        if(N%i==0)//kiem tra uoc cua N 
        {
            S+=i;//moi lan lap bien S tang len i
        }
        i++; //moi lan lap i tang 1
    }
    if(S==N)//neu S=N thi N la so hoan hao 
    { 
        printf("%d la so hoan hao",N); 
    }else{//neu S!=N thi N khong phai la so hoan hao 
        printf("%d khong phai la so hoan hao",N); 
    }
}
