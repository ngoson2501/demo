#include <iostream>
using namespace std;



int *q;
void f(int *a){
    *a = 2;
    a = q;
}

int main(int argc, char ** argv)
{
    int x = 1, y = 2;
    q = &y;
    int *p = &x;
    cout << p << endl;
    f(p);
    cout << p << endl;
}