#include <iostream>
#include <vector>

using namespace std;

template<class vector>
void Print(const vector& t, const string& sep) {
	int s = t.size();
	for (int i = 0; i < s - 1; i++) {
		cout << t[i] << sep;
	}
	cout << t[s - 1] << "\n";
}

int main() {
	vector<int> data = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	Print(data, ", "); 
}
