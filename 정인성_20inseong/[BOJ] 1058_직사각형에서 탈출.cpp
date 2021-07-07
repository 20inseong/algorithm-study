#include<iostream>
using namespace std;
int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	if (x <= w - 1 && y <= h - 1) {
		if (w - x < h - y) {
			cout << w - x << endl;
		}
		else
			cout << h - y << endl;
	}
}