#include<iostream>
using namespace std;

//int fib(int n) {
//	if (n <= 2)
//		return 1;
//	else {
//		int a = 1, b = 1, c = 0;
//		for (int i = 1; i <= n - 2; i++) {
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main() {
//	int input;
//	cin >> input;
//	int m = fib(input);
//	cout << m << endl;
//	return 1;
//}


//#include <iostream>
//#include <stack>
//using namespace std;
//int max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int n, c, cnt, m;
//stack<int> a, b;
//int main() {
//	cin >> n >> c;
//	a.emplace(c);
//	for (int i = 1; i < n; i++) {
//		cin >> c;
//		if (c < a.top()) a.emplace(c);
//		else if (b.empty() || c > b.top()) b.emplace(c);
//		else {
//			++cnt, m = max(m, (int)a.size());
//			while (!a.empty()) 
//				a.pop();
//			while (!b.empty()&& b.top() > c)
//				a.emplace(b.top()), b.pop();
//			a.emplace(c);
//		}
//	}
//	cnt++, m = max(m, (int)a.size());
//	if (!b.empty()) 
//		++cnt, m = max(m, (int)b.size());
//	cout << cnt << " " << m;
//	return 0;
//}


//long long a[] = { 1,1,1,3,4,12,24,66,160,448,1186,3334,9235,26166,73983,211297,604107,1736328,5000593,
//14448984, 41835738, 121419260, 353045291, 1028452717, 3000800627, 8769216722, 25661961898, 75195166667,
//220605519559, 647943626796 };
//int main() {
//	int x;
//	while (cin >> x && x != 0)
//		cout << a[x - 1] << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int gcd(int a, int b) {
//	if (b == 0)
//		return a;
//	else
//		return gcd(b, a % b);
//}
//int main() {
//	int c, m = 0, n = 0, x = 0;
//	while (cin >> c && c != -1) {
//		x = gcd(c, 2 * c + 2);
//		m = c / x;
//		n = (2 * c + 2) / x;
//		cout << m << "/" << n << endl;
//	}
//	return 0;
//}
