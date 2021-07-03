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

	int left, right;

	int answer = 0;


	for (int i = left; i <= right; i++) {

		int count = 0;

		for (int j = 1; j <= i; j++) {

			if (i % j == 0) {
				count++;
			}
		}

		if (count % 2 == 0)
			answer += i;

		else
			answer -= i;

	}

	return 0;
}
