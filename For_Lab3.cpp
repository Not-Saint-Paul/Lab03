/************************************
 * Автор: Станковский П.А.          *
 * Дата: 10.10.2023                 *
 * Название: Shitcode Lab3 v2       *
 * https://onlinegdb.com/oV9VfSR7i  *
 ************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double C, delta, tau, t = 15, k0, k1, k2;
    int number;

    double kei0 [5] = {5.1, 2.7, 5.4, 2.1, -7.7};
    double kei1 [5] = {6.9, 6.1, -3.8, 3.3, 8.5};
    double kei2 [5] = {1.2, 4.3, 1.5, 4.3, -1.2};
    
    for (number = 0; number < 5; ++number) {
        k0 = kei0[number];
        k1 = kei1[number];
        k2 = kei2[number];
        
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
