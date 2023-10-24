#include<bits/stdc++.h>
using namespace std;
// Hàm nhap mang
void nhapMang(int a[], int n){
    cout<<"Nhap mang: "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
}
// Ham tim phan tu max, in ra man hinh
void timMax(int a[], int n){
    int max =a[0];
    int vitrimax=0;
    
    for(int i=1;i<n;i++)
        if(a[i]>max){
            max = a[i];
            vitrimax=i;
        }
    cout<<"Max = "<<max<<endl;
    cout<<"Vi tri max: "<<vitrimax;
}
// Hàm tìm phan tu lan thu hai
void timMax2(int a[], int n){
    int max;
    int max2;
    
    // gan cai nao la gia tri ban dau;
    if(a[0]>a[1]){
        max =a[0];
        max2=a[1];
    }
    else{
        max=a[1];
        max2=a[0];
    }
    
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max2=max;
            max=a[i];
        }
        if(a[i]<max && a[i]>max2)
            max2=a[i];
    }
    cout<<"\nPhan tu lon thu hai la: "<<max2<<endl;
}
// tim min 
void timMin(int a[], int n){
    int min =a[0];
    int vitrimin=0;
    
    for(int i=1;i<n;i++)
        if(a[i]<min){   // Khac
            min = a[i];
            vitrimin=i;
        }
    cout<<"Min = "<<min<<endl;
    cout<<"Vi tri min: "<<vitrimin;
}
int main(){
    int a[100]; // Khai bao mang a co n phan tu
    int n;
    do{
        cout<<"Nhap n: "; cin>>n;
    }
    while(n<2 || n>99); // Nhap 2<n<100
    nhapMang(a,n);
    timMax(a,n);
    timMax2(a,n);
    timMin(a,n);
}
