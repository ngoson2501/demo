#include<iostream>
using namespace std;
int main(){
  // khai báo 3 biến a, b, c là ba cạnh của tam giác
  int a, b, c;
  cout<<"\nNhap vao do dai canh a: ";
  cin>>a;
  cout<<"Nhap vao do dai canh b: ";
  cin>>b;
  cout<<"Nhap vao do dai canh c: ";
  cin>>c;
  //kiểm tra xem ba cạnh có phải là ba cạnh của một tam giác hay không
  if( a<b+c && b<a+c && c<a+b ){
    //điều kiện tam giác vuông (định lý pitago)
    /* if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
      cout<<"Đây là tam giác vuông"; */
    //điều kiện tam giác đều là 3 cạnh bằng nhau
    /* else  */if(a==b && b==c)
      cout<<"Day la mot tam giac deu";
    //điều kiện tam giác cân là 2 cạnh bằng nhau
    else if(a==b || a==c || b==c)
      cout<<"Day la mot tam giac can";
    //điều kiện tam giác tù là có một góc lơn hơn 90 độ
   /*  else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
      cout<<"Đây là tam giác tù"; */
    //và trường hợp còn lại là tam giác nhọn
    else
      cout<<"Day la mot tam giac thuong";
    }
  //điều kiện ba cạnh nhập vào không phải là ba cạnh của một tam giác
  else
    cout<<"Ba canh a, b, c khong phai la 3 canh cua mot tam giac";
   
  cout<<"\n------------------------------------\n";
}