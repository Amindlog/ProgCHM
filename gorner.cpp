#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL,"rus");
    vector <double> _Vector = {1.087,-1.243,0.656,-0.783,2.574,0.564}; //x
        double Fx = 0;
        double Ai = 0;
        for (double a = 0.5,b = 2, h = 0.25; a <= b ; a += h)
        {
            for (int i = 0; i < _Vector.size(); i++)
                {
                    Ai = a * Ai + _Vector[i];
                    Fx += _Vector[i] * pow(a, _Vector.size()-i-1);
                    // cout << _Vector.size()-i-1;
                }
            cout << Ai << " " << Fx << endl; 
            Ai = 0;            
            Fx = 0;            
        }          
    return 0;
}


