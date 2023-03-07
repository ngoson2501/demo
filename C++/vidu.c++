#include <iostream>
using namespace std;

int main()
{
    const int x = 1;
    const int &ref = x;

    int y = 1;
    const int &yy = y;

    y = 2;
    cout << yy << endl;
}