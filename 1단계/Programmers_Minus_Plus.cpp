#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;



int main() {
	

	vector<int> absolutes;

	vector<bool> signs;

	absolutes.push_back(1);
	absolutes.push_back(2);
	absolutes.push_back(3);

	signs.push_back(false);
	signs.push_back(false);
	signs.push_back(true);


	int answer = 0;

	for (int i = 0; i < absolutes.size(); i++) {

		if (signs[i] == false) {
			answer -= absolutes[i];
		}

		else {
			answer += absolutes[i];
		}


	}


	cout << answer << endl;


	return 0;

}
