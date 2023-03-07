#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    switch(n){
        case 2:
            double a;
            double b;
            cout<<"Nhap a ";
            cin>>a;
            cout<<"Nhap b ";
            cin>>b;
            cout<<"Dien tich hinh chu nhat la: "<<a*b<<"\n";
            cout<<"Chu vi hinh chu nhat la: "<<2*(a+b);
            break;
        case 3:
            double A;
            double B;
            double C;
            double p;
            cout<<"Nhap a ";
            cin>> A;
            cout<<"Nhap b ";
            cin>> B;
            cout<<"Nhap c ";
            cin >> C;
            p =(A+B+C)/2;
            cout<<"Chu vi hinh tam giac la: "<<A+B+C<<"\n";
            cout<<"Dien tich hinh tam giac la: "<<sqrt(p*(p-A)*(p-B)*(p-C));
            break;
    }
}