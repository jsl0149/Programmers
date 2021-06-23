#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;




int main() {
	
	string s = "Pyy";

	int ycount = 0;
	int pcount = 0;

	for (int i = 0; i < s.size(); i++) {

		if (s[i] == 'p' || s[i] == 'P') {
			pcount++;
		}

		if (s[i] == 'y' || s[i] == 'Y') {
			ycount++;
		}


	}

	bool answer = true;

	if (pcount != ycount) {
		answer = false;
	}

	cout << boolalpha << answer << endl;

}