// lab2z1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

int main()
{
    int n;
    bool t = true;
    std::cout << "enter your number ";
    std::cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            t = false;
            break;
        }
    }
    if (t) {
        int k = 1;
        for (int i = 2; i < n; i++) {
            bool f = true;
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    f = false;
                    break;
                }
            }
            if (f) k += 1;
        }
        bool l = true;
        if (k == 1) l = false;
        for (int i = 2; i <= sqrt(k); i++) {
            if (k % i == 0) {
                l = false;
                break;
            }
        }
        if (l) std::cout << "it's super-prime";
        else std::cout << "it's not super-prime";
    }
    else std::cout << "it's not super-prime";
}
