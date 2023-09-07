// lab2z4v1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int n, s = 0;
    double x, y;
    std::cout << "enter number of shoots ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "enter coordinates ";
        std::cin >> x >> y;
        if (x >= 0.12 && x <= 0.67 && y >= -0.89 && y <= -0.44) {
            x = 0.7;
            y = -0.35;
        }
        if ((x - 1.3) * (x - 1.3) + (y + 0.33) * (y + 0.33) <= 1) {
            s += 10;
        }
        else if ((x - 1.3) * (x - 1.3) + (y + 0.33) * (y + 0.33) <= 4) {
            s += 5;
        }
    }
    std::cout << "you've got " << s << " points.\n";
    if (s / n > 7) std::cout << "you're a sniper";
    else if (s / n > 3) std::cout << "you're a good shooter";
    else std::cout << "you're just a beginner";
}
