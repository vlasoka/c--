#include <iostream>

using namespace std;

bool Input(int &a, int &b) {
    cout << "enter 2 int numbers in [-3; 7]" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    if ((a < -3) || (a > 7) || (b < -3) || (b > 7)) return false;
    else return true;
}

int main()
{
    int a = 0, b = 0;
    if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    cout << "s = " << s;
    return 0;
}
