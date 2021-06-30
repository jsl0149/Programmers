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
	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "아 이거 어렵네" << endl;

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
