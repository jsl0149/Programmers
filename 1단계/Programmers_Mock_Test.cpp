#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;


bool compare(string a, string b) {

	return a.size() < b.size();


}



int main() {

	vector<int> answers;
	vector<int> answer;
	int aaa = 0;
	int bbb = 0;
	int ccc = 0;

	int a[5] = { 1,2,3,4,5 };
	int b[8] = { 2,1,2,3,2,4,2,5 };
	int c[10] = { 3,3,1,1,2,2,4,4,5,5 };

	int acount = 0;
	int bcount = 0;
	int ccount = 0;

	for (int i = 0; i < answers.size(); i++) {

		if (a[aaa++] == answers[i]) {
			acount++;
		}

		if (aaa % 5 == 0) {
			aaa = 0;
		}

		if (b[bbb++] == answers[i]) {
			bcount++;
		}

		if (bbb % 8 == 0) {
			bbb = 0;
		}

		if (c[ccc++] == answers[i]) {
			ccount++;
		}

		if (ccc % 10 == 0) {
			ccc = 0;
		}

	}




	vector<int> check;

	check.push_back(acount);
	check.push_back(bcount);
	check.push_back(ccount);

	sort(check.begin(), check.end());

	if (check[2] == acount) {
		answer.push_back(1);
	}

	if (check[2] == bcount) {
		answer.push_back(2);
	}

	if (check[2] == ccount) {
		answer.push_back(3);
	}



}
