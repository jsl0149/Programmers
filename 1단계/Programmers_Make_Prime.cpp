#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
#include <queue>
using namespace std;



int main() {

	vector<int> nums;

	int answer = 0;

	vector<int> check;

	for (int i = 0; i < nums.size(); i++) {

		int a = nums[i];

		for (int j = i + 1; j < nums.size(); j++) {

			int b = nums[j];

			for (int t = j + 1; t < nums.size(); t++) {

				int c = nums[t];

				int sum = a + b + c;

				check.push_back(sum);

			}

		}

	}


	for (int i = 0; i < check.size(); i++) {

		bool prime = true;

		for (int j = 2; j < check[i]; j++) {

			if (check[i] % j == 0) {
				prime = false;
				break;
			}

		}

		if (prime == true) {
			answer++;
		}

	}


	return 0;
}
