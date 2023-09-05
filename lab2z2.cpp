// lab2z2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, y, z;
    std::cout << "enter your snils\n";
    std::cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7 >> x8 >> x9 >> y;
    z = x1 * 9 + x2 * 8 + x3 * 7 + x4 * 6 + x5 * 5 + x6 * 4 + x7 * 3 + x8 * 2 + x9;
    if (z < 100) {
        z = z;
    }
    else if (z == 100 || z == 101) {
        z = 0;
    }
    else {
        z = z % 101;
        if (z == 100) {
            z = 0;
        }
    }
    if (y == z) {
        std::cout << "True";
    }
    else std::cout << "False";
}
