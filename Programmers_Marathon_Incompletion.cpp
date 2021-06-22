#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {

	vector<string> part;

	part.push_back("mislav");
	part.push_back("stanko");
	part.push_back("mislav");
	part.push_back("ana");

	vector<string> completion;

	completion.push_back("stanko");
	completion.push_back("ana");
	completion.push_back("mislav");

	sort(part.begin(), part.end());
	sort(completion.begin(), completion.end());


	vector<string> check = part;


	string answer = "";
	
	
	sort(check.begin(), check.end());
	sort(completion.begin(), completion.end());

	for (int i = 0; i < completion.size(); i++) {

		if (part[i] != completion[i]) {
			answer = part[i];
			break;
		}

	}
	
	


	cout << answer << endl;


}


