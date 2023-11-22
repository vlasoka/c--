#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("output.txt", ios::out | ios::binary);
    if (!out) {
        cout << "fail openning the file\n";
        return 1;
    }
    for (string s; getline(cin, s);) {
        if (!s.empty()) {
            out << s << '\n';
        }
    }
    out.close();
}
