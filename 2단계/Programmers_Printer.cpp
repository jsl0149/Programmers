#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
#include <queue>
using namespace std;



int main() {

	vector <int> k = { 1,1,9,1,1,1 };

	vector <pair <int, int>> v;

	

	
	for (int i = 0; i < k.size(); i++) {
		v.push_back(pair<int, int>(k[i], i));
	}

	
	int location = 0;
	
	int count = 0;

	while (!v.empty()) {

		bool check = false;

		for (int i = 0; i < v.size(); i++) {

			if (v[0].first < v[i].first) {
				pair<int, int> temp = v[0];
				v.erase(v.begin() + 0);
				v.push_back(temp);
				check = true;
				break;
			}

		}

		if (check == false) {

			if (v[0].second == location) {
				count++;
				break;
			}

			else {
				v.erase(v.begin() + 0);
				count++;
			}

		}

	}

	
	cout << count << endl;



	return 0;
}
