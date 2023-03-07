#include <iostream>
using namespace std;
#define X 1

void f(){
    #define Z 'z'
}
void g(){
    #define Y 'a'
}

void g();

int main()
{
    cout << Z <<endl;
    cout << Y << endl;
}
