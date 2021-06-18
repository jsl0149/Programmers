#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

bool compare(int v1, int v2) {

	if (v1 > v2) {
		return true;
	}

	else
		return false;
}

int main() {

	
	vector<int> v { 1, 2,3};

	priority_queue <int, vector<int>, greater<>> pq;

	for (int i = 0; i < v.size(); i++) {
		pq.push(v[i]);
	}

	int K = 11;

	int count = 0;

	int sizes = v.size();

	while (pq.top() < K) {

		if (pq.size() == 1) {
			count = -1;
		}

		int temp1 = pq.top();
		pq.pop();
		int temp2 = pq.top();
		pq.pop();
		int temp3 = temp1 + temp2 * 2;

		pq.push(temp3);

		count++;

	}

	cout << count << endl;

}