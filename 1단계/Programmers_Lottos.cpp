#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;




int main() {
	
	string s = "Pyy";

	vector<int> lottos;
	vector<int> win_nums;

	int count = 0;
	int zero_count = 0;

	lottos.push_back(45);
	lottos.push_back(4);
	lottos.push_back(35);
	lottos.push_back(0);
	lottos.push_back(0);
	lottos.push_back(0);

	win_nums.push_back(3);
	win_nums.push_back(10);
	win_nums.push_back(45);
	win_nums.push_back(1);
	win_nums.push_back(6);
	win_nums.push_back(19);

	
	for (int i = 0; i < (int) lottos.size(); i++) {

		for (int j = 0; j < (int) win_nums.size(); j++) {

			if (lottos[i] == win_nums[j]) {
				count++;
				break;
			}
		}
		
		if (lottos[i] == 0) {
			zero_count++;
		}
	}


	int high = count + zero_count;
	int low = count;
	
	int rank1 = 0;
	int rank2 = 0;

	if (high == 6) {
		rank1 = 1;
	}

	else if (high == 5) {
		rank1 = 2;
	}

	else if (high == 4) {
		rank1 = 3;
	}

	else if (high == 3) {
		rank1 = 4;
	}

	else if (high == 2) {
		rank1 = 5;
	}

	else
		rank1 = 6;



	if (low == 6) {
		rank2 = 1;
	}

	else if (low == 5) {
		rank2 = 2;
	}

	else if (low == 4) {
		rank2 = 3;
	}

	else if (low == 3) {
		rank2 = 4;
	}

	else if (low == 2) {
		rank2 = 5;
	}

	else
		rank2 = 6;

	cout << rank1 << ", " << rank2 << endl;


}