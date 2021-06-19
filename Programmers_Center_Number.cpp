#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;



int main() {
	
	string abc = "qwer";

	string answer = "";

	if (abc.size() % 2 == 1) {
		answer = abc[abc.size() / 2];
	}
	
	else {
		answer = abc[(abc.size() / 2) - 1];
		answer += abc[abc.size() / 2];
	}


	cout << answer << endl;

	return 0;

}