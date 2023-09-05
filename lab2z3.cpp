// lab2z3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int m, q, s = 0;
    std::cout << "enter your money ";
    std::cin >> m;
    q = m / 10;
    s += q;
    m = m - q * 10;
    q = m / 5;
    s += q;
    m = m - q * 5;
    q = m / 2;
    s += q;
    m = m - q * 2;
    s += m;
    std::cout << "quantity: " << s;
}
