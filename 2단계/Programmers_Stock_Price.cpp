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
	vector<int> prices;
	vector<int> answer;

	for (int i = 0; i < prices.size(); i++) {

		int count = 0;

		for (int j = i + 1; j < prices.size(); j++) {

			if (prices[i] <= prices[j]) {
				count++;
			}

			else {
				count++;
				break; // 여기다 answer.push_back(count); 이걸 쓰면 끝까지 안떨어지는 애들의 값은 안넣는다.
			}
		}

		answer.push_back(count);

	}

	for (auto i : answer) {
		cout << i << " ";
	}

	return 0;
}
