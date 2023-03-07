#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Nhap vao do dai canh a: ";
    cin>>a;
    cout<<"Nhap vao do dai canh b: ";
    cin>>b;
    cout<<"Nhap vao do dai canh c: ";
    cin>>c;
    if( a<b+c && b<a+c && c<a+b ){
        if(a==b && b==c)
            cout<<"Day la mot tam giac deu";  
        else if(a==b || a==c || b==c)
            cout<<"Day la mot tam giac can";
        else if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (c*c+b*b==a*a)){
            cout<<"Day la mot tam giac vuong";
        }
        else
            cout<<"Day la mot tam giac thuong";
    }else
        cout<<"Ba canh a, b, c khong tao thanh mot tam giac";


}