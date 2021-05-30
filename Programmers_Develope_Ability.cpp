#include <iostream>
#include <vector>
#include <queue>
using namespace std;



vector<int> solution(vector<int> progresses, vector<int> speeds);

int main() {

	vector <int> v1;
	vector <int> v2;
	vector <int> v3;

	v1.push_back(95);
	v1.push_back(90);
	v1.push_back(99);
	v1.push_back(99);
	v1.push_back(80);
	v1.push_back(99);

	v2.push_back(1);
	v2.push_back(1);
	v2.push_back(1);
	v2.push_back(1);
	v2.push_back(1);
	v2.push_back(1);

	v3 = solution(v1, v2);

	for (int i = 0; i < v3.size(); i++) {
		cout << v3[i] << " ";
	}

	cout << endl;

}



vector<int> solution(vector<int> progresses, vector<int> speeds) {

	
	queue <int> prog;
	vector<int> answer;
	int check = 0;
	

	for (int i = 0; i < progresses.size(); i++) {
		prog.push(progresses[i]);
	}
	
	while (!prog.empty()) {

		int count = 0;

		for (int i = 0; i < progresses.size(); i++) {

			progresses[i] += speeds[i];

		}

		cout << check << endl;

		for (int i = check; i < progresses.size(); i++) {

			if (progresses[i] >= 100) {
				check++;
				count++;
			}

			else {
				break;
			}

		}

		for (int i = 0; i < count; i++) {
			prog.pop();
		}

		
		if (count != 0) {
			answer.push_back(count);
		}
	}



	return answer;

}