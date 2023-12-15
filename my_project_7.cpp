#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
    int sum;
    float x, Y, i;
    cout << "input x: ";
    cin >> x;
    sum = 0;
    if (x == 0) {
        cout << "error";
    }
    else {
        for (i = 0; i < 6; i++) {
            sum = sum + pow(i, 2);
        }
        Y = (sum + sin(x)) / (pow(x, 2) + 5);
        cout << "Y=" << Y;

    }
}

}

