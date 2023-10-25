#include<iostream>
  using namespace std;
  int main()
  {
  int a ;
  int b ;
  double Nghiem ;
  cout<<"Nhap he so a= ";
  cin>>a;
  cout<<"Nhap he so b= ";
  cin>>b;
  if(a==0) {
  	if(b==0){
  		cout << "Phuong trinh vo so nghiem" << endl;
  		} else {
  	    cout << "Phuong trinh vo so nghiem" << endl;
  		}
  		} else {
  			Nghiem = (double)-b/a;
  			cout << "Phuong trinh co nghiem la: " << Nghiem << endl;
  			}
  			return  0;
  			}
  		
  
