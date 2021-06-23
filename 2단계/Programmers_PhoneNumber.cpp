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

	vector<string> phone_book;

	phone_book.push_back("119");
	phone_book.push_back("97674223");
	phone_book.push_back("1195524421");

	sort(phone_book.begin(), phone_book.end());

	bool check = true;


	for (int i = 0; i < phone_book.size()-1; i++) {

		if (phone_book[i+1].find(phone_book[i]) != 0) {
			continue;
		}


		for (int j = i+1; j < phone_book.size(); j++) {
			
			if (phone_book[j].find(phone_book[i]) == 0) {
				check = false;
				break;
			}

		}


	}



	cout << boolalpha <<  check << endl;
	

	
}
