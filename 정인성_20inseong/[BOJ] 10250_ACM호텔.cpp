#include<iostream>
using namespace std;
int main() {
	int t, cnt = 1;
	int h, w, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		if (h >= 1 && h <= 99 && w >= 1 && w <= 99 && n >= 1 && n <= h * w) {
			int h1, w1;
			h1 = n % h;
			w1 = n / h;
			if (h1 > 0)
				w1++;
			else
				h1 = h;
			cout << h1 * 100 + w1 << endl;
		}
	}	
}