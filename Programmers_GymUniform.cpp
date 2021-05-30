#include <iostream>
#include <vector>
#include <queue>
using namespace std;




int main() {

	
	int l[3] = {2,3,4};
	int r[2] = { 3,5 };

	int n = 5;

	vector<int> lost;
	vector<int> reserve;

	vector<int> check1;
	vector<int> check2;


	for (int i = 0; i <3; i++) {
		lost.push_back(l[i]);
	}

	for (int i = 0; i < 2; i++) {
		reserve.push_back(r[i]);
	}
	

	for (int i = 0; i < lost.size(); i++) {

		for (int j = 0; j < reserve.size(); j++) {
			if (lost[i] == reserve[j]) {
				check1.push_back(lost[i]);
				check2.push_back(reserve[j]);
			}
		}
	
	}


	for (int i = 0; i < check1.size(); i++) {
		
		for (int j = 0; j < lost.size(); j++) {

			if (check1[i] == lost[j]) {
				lost.erase(lost.begin() + j);
			}

		}
	}


	for (int i = 0; i < check2.size(); i++) {

		for (int j = 0; j < reserve.size(); j++) {

			if (check2[i] == reserve[j]) {
				reserve.erase(reserve.begin() + j);
			}

		}
	}

	
	int lost_size = lost.size();


	for (int i = 0; i < lost.size(); i++) {

		int front = lost[i] - 1;
		int back = lost[i] + 1;

		for (int j = 0; j < reserve.size(); j++) {

			if (front == reserve[j] || back == reserve[j]) {
					lost_size--;
			}
			
			if (front == reserve[j]) {
				reserve[j] = -1;
				continue;
			}

			else if (back == reserve[j]) {
				reserve[j] = -1;
			}

		}

	}

	if (lost_size < 0) {
		lost_size = 0;
	}

	cout << n - lost_size << endl;


}


