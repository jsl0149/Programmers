#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;


bool compare(pair<int, double> a, pair<int, double> b) {

	if (a.second == b.second) {
		return a.first < b.first;
	}

	else {
		return a.second > b.second;
	}

}


int main() {
	

	vector<int> stages;

	stages.push_back(1);
	stages.push_back(2);
	stages.push_back(1);
	stages.push_back(1);
	stages.push_back(2);
	
	
	
	int N = 3;

	vector<double> st;
	vector<pair<int, double>> check;
	vector<int> answer;
	
	for (int i = 1; i <=N; i++) {

		int count = 0;
		int fail = 0;
		for (int j = 0; j < stages.size(); j++) {

			if (stages[j] >= i) {
				count++;
			}

			if (stages[j] == i) {
				fail++;
			}

		}

		if (count == 0) {
			st.push_back(0);
		}
		else {
			st.push_back((double)fail / count);
		}
	}

	for (int i = 0; i < st.size(); i++) {
		check.push_back(pair<int, double>(i+1, st[i]));
	}


	sort(check.begin(), check.end(), compare);

	for (pair<int, double> i : check) {

		answer.push_back(i.first);

	}

	
	for (int i : answer) {
		cout << i << " ";
	}

	cout << endl;

	return 0;

}