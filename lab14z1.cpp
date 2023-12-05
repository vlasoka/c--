#include <iostream>

using namespace std;

template<class T>
T average(T arr[], int size) {
    T s = 0;
    for (int i = 0; i < size; i++) {
        s += arr[i];
    }
    return s / size;
}

int main()
{
    int arr[] = { 9,3,17,6,5,4,31,2,12 };
    long arrl[] = { 10000000000, 234567890111 };
    double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
    char arrc[] = "Hello, word";
    int k1 = sizeof(arr) / sizeof(arr[0]);
    int k2 = sizeof(arrl) / sizeof(arrl[0]);
    int k3 = sizeof(arrd) / sizeof(arrd[0]);
    int k4 = sizeof(arrc) / sizeof(arrc[0]) - 1;
    cout << "average value is " << average(arr, k1) << endl;
    cout << "average value is " << average(arrl, k2) << endl;
    cout << "average value is " << average(arrd, k3) << endl;
    cout << "average value is " << static_cast<int>(average(arrc, k4)) << endl;
}
