#include<iostream>
#include<stdlib.h>
#include<conio.h>
#define pi 3.14
using namespace std;
class fn
{
      public:
        
        void dientich(double,double);  //hinh chu nhat
        
};
 

void fn::dientich(double a,double b)
{
      cout<<"Dien tich hinh chu nhat la: "<<a*b;
}

 
int main()
{
     int ch;
     int a,b,r;
     
     fn obj;
     cout<<"\n\t\tNap chong ham";
     cout<<"\nDien tich hinh chu nhat";
     cout<<"\nNhap lua chon cua ban: ";
     cin>>ch;
 
     switch(ch)
     {
              
              case 2:
                cout<<"Nhap hai canh cua hinh chu nhat: ";
                cin>>a>>b;
                obj.dientich(a,b);
                break;
              case 3:
                cout<<"Nhap cac canh cua hinh tam giac: ";
                cin>>a>>b;
                obj.dientich(0.5,a,b);
                break;
              case 4:
                exit(0);
     }
return 0;
}