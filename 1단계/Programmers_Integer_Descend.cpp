#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
#include <queue>
using namespace std;



int main() {

	long long answer = 0;

	long long n = 75123151;

	string s = to_string(n);

	sort(s.begin(), s.end(), greater<int>());

	answer = stoll(s);

	
	return 0;
}
