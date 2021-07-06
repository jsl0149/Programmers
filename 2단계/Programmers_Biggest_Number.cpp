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

	vector<int> kbc = { 3, 30, 35, 5,9};

	vector<string> v;

	for (auto i : kbc) {
		v.push_back(to_string(i));
	}

	sort(v.begin(), v.end(), choose);
	string answer = "";

	for (auto i : v) {
		answer += i;
	}

	
	cout << boolalpha << ("absolutely" < "greedy") << endl;

	cout << answer[0] << endl;

	return 0;
}
