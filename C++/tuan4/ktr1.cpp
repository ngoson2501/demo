#include <bits/stdc++.h>
using namespace std;
  
bool soNguyenTo(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int tongCacChuSo(int n) {
    int sum=0;
    do {
        sum+=n%10;
        n/=10;
    } while (n>0);


    return sum;
}
int main() {
    int n;
    cout<<"nhap so can ktra: " << endl;
    cin >> n;
    if (soNguyenTo(n)) {
        cout << "Day la so nguyen to" << endl;
        cout << "Tong Cac chu so cua so tren la: " << tongCacChuSo(n) <<endl;
    } else {
        cout << "Khong phai so nguyen to" << endl;
    }
    return 0;
}