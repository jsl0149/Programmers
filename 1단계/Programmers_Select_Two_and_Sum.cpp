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
	vector<int> numbers;

	vector<int> answer;

	for (int i = 0; i < numbers.size(); i++) {
		int a = numbers[i];

		for (int j = i + 1; j < numbers.size(); j++) {

			int sum = 0;
			int b = numbers[j];
			sum = a + b;

			bool redun = false;

			for (auto i : answer) {
				if (i == sum) {
					redun = true;
					break;
				}
			}

			if (redun == false) {
				answer.push_back(sum);
			}

			else;

		}
	}

	sort(answer.begin(), answer.end());



	return 0;
}
