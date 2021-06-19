#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;



int main() {
	
	string abc = "-123";

	int answer = 0;

	int mul = 1;

	int k = stoi(abc);

	for (int i = abc.size() - 1; i >= 0; i--) {

		if ((int) abc[i] - 48 >= 0) {
			answer += mul * ((int) abc[i] - 48);
			mul *= 10;
		}
		else {
			break;
		}
	}

	if (abc[0] == '-') {
		answer = -answer;
	}

	cout << answer << endl;

	cout << k << endl;


	return 0;

}