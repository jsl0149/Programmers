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

	vector<vector<int>> answers;
	vector<int> answer;

	string s = "{{123}}";
	string ttt = "";
	

	vector <int> temp;

	int ccc = 0;
	
	for (int i = 1; i < s.size(); i++) {

		if ((48 <= (int)s[i] && (int)s[i] <= 57)) {
			ttt += s[i];
		}

		else if ((s[i] == '}' || s[i] == ',') && s[i-1] != '}') {
			
			temp.push_back(stoi(ttt));
			ttt = "";

			if (s[i] == '}') {
				answers.push_back(temp);
				temp = {};
			}

		}
	}



	sort(answers.begin(), answers.end(),compare);



	answer.push_back(answers[0][0]);
	ccc = answers[0][0];

	for (int i = 1; i < answers.size(); i++) {
		int sum = 0;

		for (int j = 0; j < answers[i].size(); j++) {

			sum += answers[i][j];

		}

		answer.push_back(sum - ccc);

		ccc = sum;

	}


	for (auto i : answer) {
		cout << i << " ";
	}

	cout << endl;

	return 0;
}
