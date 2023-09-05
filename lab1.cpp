// lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>


int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, s;
    std::cout << "1 point: ";
    std::cin >> x1 >> y1;
    std::cout << "2 point: ";
    std::cin >> x2 >> y2;
    std::cout << "3 point: ";
    std::cin >> x3 >> y3;
    std::cout << "4 point: ";
    std::cin >> x4 >> y4;
    std::cout << "5 point: ";
    std::cin >> x5 >> y5;
    s = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5);
    std::cout << "result: " << s;
}
