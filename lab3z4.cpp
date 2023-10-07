#include <iostream>

using namespace std;

int summa(int n) {
    if (n == 0) return 0;
    return 5 * n + summa(n - 1);
}

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    cout << summa(n) << endl;
}
