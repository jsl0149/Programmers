#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
#include <queue>
using namespace std;



int main() {

	string s = "baabaa";

	int answer = 0;
	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	cout << "�� �̰� ��Ƴ�" << endl;

	stack<int> st;

	for (int i = 0; i < s.size(); i++) {

		if (st.empty() || st.top() != s[i]) {
			st.push(s[i]);
		}

		else if (st.top() == s[i]) {
			st.pop();
		}

	}

	if (st.empty())
		answer = 1;


	return 0;
}
