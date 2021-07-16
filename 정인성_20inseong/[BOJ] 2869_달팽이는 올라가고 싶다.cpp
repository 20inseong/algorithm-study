#include<iostream>
using namespace std;
int main() {
	int A, B, V, v1 = 0, cnt = 1;
	cin >> A >> B >> V;
	v1 = V - A;
	if (v1 % (A - B) == 0) {
		cnt = cnt + v1 / (A - B);
	}
	else
		cnt = cnt + v1 / (A - B) + 1;
	cout << cnt << endl;
}