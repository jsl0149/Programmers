#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
using namespace std;


int count = 0;

bool compare(vector<int> a, vector<int> b) {

	return a.size() < b.size();


}



int main() {

	string s = "";

	string answer = "";

	vector<char> k;

	for (int i = 0; i < s.size(); i++) {

		k.push_back(s[i]);

	}

	sort(k.begin(), k.end(), compare);

	for (int i = 0; i < k.size(); i++) {

		answer += k[i];

	}

	return 0;
}
