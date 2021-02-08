#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int x = 0.122+0.01814;
    double EPS  = 0.000001;
    double x0 = 1;
    double tx = 0;
    double fx = 100;
    double fact = 1;
    double sum1 = 0;
    for (int i = 1; fx >= EPS; i++)
    {
        fact *= i;
        x = 1 + x;1
        x0 *= x;
        fx = fact/x0;
        //cout << fx << endl;
       sum1 += fx / fact;
    }
    cout << sum1 << endl;

    return 0;
}