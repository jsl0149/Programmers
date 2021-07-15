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

	vector<int> d;
	int budget;

	int answer = 0;
	sort(d.begin(), d.end());
	int sum = 0;
	for (int i = 0; i < d.size(); i++) {
		if (sum + d[i] > budget) {
			break;
		}
		else {
			sum += d[i];
			answer++;
		}
	}

	return 0;
}
