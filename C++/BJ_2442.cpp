//BJ_2442
#include<iostream>
using namespace std;

int main() {
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5-i; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}