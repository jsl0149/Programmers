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

	int n = 5;

	string answer = "";

	for (int i = 0; i < n; i++) {

		if (i % 2 == 0) {
			answer += "¼ö";
		}
		else {
			answer += "¹Ú";
		}

	}


	cout << answer << "\n";

}
