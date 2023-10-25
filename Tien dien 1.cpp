#include<stdio.h>
main()
{
unsigned long cu, moi, dien, tien =0;
int i;

do
{
printf("chi so dien cu: ");
scanf("%ld", &cu);
printf("chi so dien moi: ");
scanf("%ld", &moi);
}
while(moi<cu);

dien=moi-cu;

for(i=1;i<=100,i<=dien;i++)
tien+=455;
for(i=101;i<=150,i<=dien;i++)
tien+=591;
for(i=151;i<=200,i<=dien;i++)
tien+=818;
for(i=201;i<=300,i<=dien;i++)
tien+=1000;


printf("so tien phai tra la: %ld dong", tien);
}
