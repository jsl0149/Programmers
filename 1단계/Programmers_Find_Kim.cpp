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
	vector<string> seoul;

	string answer = "";

	int index = 0;

	for (int i = 0; i < seoul.size(); i++) {

		if (seoul[i] == "Kim") {
			index = i;
		}

	}

	answer = "�輭���� " + to_string(index) + "�� �ִ�";


	return 0;
}
