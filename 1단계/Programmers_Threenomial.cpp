#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
#include <queue>
using namespace std;


bool choose(string a, string b) {
	return a + b > b + a;
}

int main() {

	int n;

	int answer = 0;
	int abc = 0;

	vector<int> kbc;


	int count = 1;

	while (count <= n) {
		count *= 3;
	}

	count = count / 3;

	cout << count << endl;

	while (n != 0) {

		int q = n / count;

		n = n - (q * count);

		kbc.push_back(q);

		count /= 3;


	}

	for (auto i : kbc) {
		cout << i << " ";
	}

	cout << endl;

	int sum = 0;

	count = 1;

	for (int i = 0; i < kbc.size(); i++) {
		sum += kbc[i] * count;
		count *= 3;
	}

	answer = sum;


	return 0;
}
