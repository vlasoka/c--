#include <iostream>

using namespace std;

string bin(int n) {
    if (n == 1) return "1";
    if (n % 2 == 0) return "0" + bin(n / 2);
    else return "1" + bin((n - 1) / 2);
}

int main()
{
    cout << "enter n: ";
    int n;
    cin >> n;
    string s = bin(n);
    reverse(s.begin(), s.end());
    cout << s;
}
