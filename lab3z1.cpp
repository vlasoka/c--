#include <iostream>
#include <string>

using namespace std;

void checking(int num[]) {
    int z = num[0] * 9 + num[1] * 8 + num[2] * 7 + num[3] * 6 + num[4] * 5 + num[5] * 4 + num[6] * 3 + num[7] * 2 + num[8];
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
    if (num[9] == z) {
        cout << "true";
        return;
    }
    cout << "false";
    return;
}

int main()
{
    string snils;
    cout << "enter your snils number: ";
    getline(cin, snils);
    int nums[10];
    int j = 0;
    bool t = true;
    for (int i = 0; i < snils.length(); i++) {
        if (!(isdigit(snils[i])) && !(snils[i] == ' ') && !(snils[i] == '-')) {
            t = false;
            break;
        }
        if (isdigit(snils[i])) {
            nums[j] = snils[i] - '0';
            j++;
        }
        if (j == 9) {
            string ch = "";
            i++;
            while (ch.length() != 2) {
                if (isdigit(snils[i])) {
                    ch += snils[i];
                }
                i++;
            }
            nums[j] = stoi(ch);
            break;
        }
    }
    if (j < 9) t = false;
    if (t) checking(nums);
    else cout << "false";
}
