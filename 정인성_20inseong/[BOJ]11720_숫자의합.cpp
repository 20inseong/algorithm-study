#include<iostream>
using namespace std;
int main() {
	int num, sum = 0;
	char num_s;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> num_s;
		sum += num_s - 48;
	}
	cout << sum;
	return 0;
}