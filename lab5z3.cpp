#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    int n;
    cout << "enter the number of elements\nn = ";
    cin >> n;
    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        int c;
        cin >> c;
        a.push_back(c);
    }
    int key;
    cout << "enter the key (-1 for exit): ";
    cin >> key;
    while (key != -1) {
        int index = 0;
        for (int i = 0; i < n; i++) {
            if (key == a[i]) {
                index = i;
                break;
            }
        }
        a.erase(remove(a.begin(), a.end(), index + 1));
        a.insert(a.begin(), key);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << "enter the key: ";
        cin >> key;
    }
}
