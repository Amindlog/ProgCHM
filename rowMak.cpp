#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double exspanentaX1(double EPS, double x1);
double exspanentaX2(double EPS, double x2);
int main() {
    double const EPS = 0.000001;    
    double x1 = 0.716 + 0.04314;
    double x2 = 2.834 - 0.02814;
    
    cout << fixed << setprecision(9);
    cout << "e^x при x1 = 0.716 + 0.04314, x2 = 2.834 - 0.02814 " << endl;
    cout << "exp 1 = ";
    cout << exspanentaX1(EPS, x1) << endl;
    cout << "exp = \t";
    cout << exp(x1) << endl << endl;
    cout << "exp 2 = ";
    cout << exspanentaX1(EPS, x2) << endl;
    cout << "exp = \t";
    cout << exp(x2) << endl;
    return 0;
}
double exspanentaX1(double EPS,double x1){ 
    double x0 = 1;
    double sum1 = 1;
    double tmp = 100;    
    int fact1 = 1;//factorial
    for (int i = 1 ; tmp > EPS; i++){            
        fact1 *= i;
        x0 *= x1;
        tmp = x0/ fact1;
        sum1 += tmp ;
    }
    return sum1;
}