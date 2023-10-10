/************************************
 * Автор: Станковский П.А.          *
 * Дата: 10.10.2023                 *
 * Название: Shitcode Lab3 v1       *
 * https://onlinegdb.com/QZQ9mAPZ1  *
 ************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double C, delta, tau, t = 15, k0, k1, k2, number;
    
    for (number = 1; number < 6; ++number) {
        if (number == 1) {
            k0 = 5.1;
            k1 = 6.9;
            k2 = 1.2;
        }
        if (number == 2) {
            k0 = 2.7;
            k1 = 6.1;
            k2 = 4.3;
        }
        if (number == 3) {
            k0 = 5.4;
            k1 = -3.8;
            k2 = 1.5;
        }
        if (number == 4) {
            k0 = 2.1;
            k1 = 3.3;
            k2 = 4.3;
        }
        if (number == 5) {
            k0 = -7.7;
            k1 = 8.5;
            k2 = -1.2;
        }
        
        delta = pow(k1, 2) - 4 * k0 * k2;
        tau = 2 * k2 * t + k1;
        
        if (delta < 0) {
            C = (2 / sqrt(-delta)) * (atan(tau / sqrt(-delta)) - atan(k1 / sqrt(-delta)));
        }
        if (delta > 0) {
            C = (1 / sqrt(delta)) * (log(((tau - sqrt(delta)) * (k1 + sqrt(delta))) / ((tau + sqrt(delta)) * (k1 - sqrt(delta)))));
        }
      
        cout.fixed;
        cout << "C = " << C << "  delta = " << delta << endl;
        cout << endl;
    }
    
    return 0;
}
