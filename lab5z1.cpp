#include <iostream>

using namespace std;

void input_array(int a[], const int n) {
    cout << "enter the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void output_array(const int a[], const int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int* sort_array(int a[], const int n) {
    int min;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            min = (a[j] < a[min]) ? j : min;
        }
        if (min != i) {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    return a;
}

int sum_array(const int a[], const int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
    }
    return s;
}

double mid_array(const int a[], const int n) {
    return sum_array(a, n) / n;
}

int sum_g_array(const int a[], const int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) s += a[i];
    }
    return s;
}

int sum_l_array(const int a[], const int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) s += a[i];
    }
    return s;
}

int sum_e_array(const int a[], const int n) {
    int s = 0;
    for (int i = 0; i < n; i += 2) {
        s += a[i];
    }
    return s;
}

int sum_o_array(const int a[], const int n) {
    int s = 0;
    for (int i = 1; i < n; i += 2) {
        s += a[i];
    }
    return s;
}

void max_min_array(const int a[], const int n) {
    int min_i = 0, max_i = 0;
    for (int i = 1; i < n; i++) {
        min_i = (a[i] < a[min_i]) ? i : min_i;
        max_i = (a[i] > a[max_i]) ? i : max_i;
    }
    cout << "min element in array: index = " << min_i << ", element = " << a[min_i] << endl;
    cout << "max element in array: index = " << max_i << ", element = " << a[max_i] << endl;
}

void p_max_min_array(const int a[], const int n) {
    int min_i = 0, max_i = 0;
    for (int i = 1; i < n; i++) {
        min_i = (a[i] < a[min_i]) ? i : min_i;
        max_i = (a[i] > a[max_i]) ? i : max_i;
    }
    if (abs(min_i - max_i) == 1) {
        cout << "no elements between min and max" << endl;
        return;
    }
    if (max_i < min_i) {
        int temp = min_i;
        min_i = max_i;
        max_i = temp;
    }
    int p = 1;
    for (int i = min_i + 1; i < max_i; i++) {
        p *= a[i];
    }
    cout << "the product of elements between min and max: p = " << p << endl;
}

int main()
{
    cout << "array functions" << endl;
    const int n = 7;
    int a[n];
    input_array(a, n);
    cout << "your array: " << endl;
    output_array(a, n);
    cout << "sum of array elements: s = " << sum_array(a, n) << endl;
    cout << "mid of array: m = " << mid_array(a, n) << endl;
    cout << "sum of elements grater than 0: " << sum_g_array(a, n) << endl;
    cout << "sum of elements less than 0: " << sum_l_array(a, n) << endl;
    cout << "sum of elements with even indexes: " << sum_e_array(a, n) << endl;
    cout << "sum of elements with odd indexes: " << sum_o_array(a, n) << endl;
    max_min_array(a, n);
    p_max_min_array(a, n);
    cout << "your array after sorting: " << endl;
    sort_array(a, n);
    output_array(a, n);
}
