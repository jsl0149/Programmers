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

	int a, b;

	long long answer = 0;

	if (a > b) {
		int temp = 0;
		temp = a;
		a = b;
		b = temp;
	}

	else;

	for (int i = a; i <= b; i++) {
		answer += i;
	}

	return answer;

}
