#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, name = "", op = "", a = "", b = "";
    getline(cin, s);
    int i = 0;
    while (s[i] != ' ') {
        name += s[i];
        i++;
    }
    i++;
    while (s[i] != ' ') {
        op += s[i];
        i++;
    }
    i++;
    while (s[i] != ' ') {
        a += s[i];
        i++;
    }
    i++;
    while (i < s.size() && s[i] != ' ') {
        b += s[i];
        i++;
    }
    bool t = true;
    if (s.size() > i) {
        t = false;
    }
    if (t) {
        if (op == "-a") {
            int res = stoi(a) + stoi(b);
            cout << res << endl;
        }
        else if (op == "-m") {
            int res = stoi(a) * stoi(b);
            cout << res << endl;
        }
        else cout << "invalid operand" << endl;
    }
    else cout << "too many arguments" << endl;
}
