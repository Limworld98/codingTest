#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;

	map<string, int> temp;

	for (string str : phone_book)
		temp.insert({ str,0 });

	for (int i = 0; i < phone_book.size(); i++)
		for (int j = 0; j < phone_book[i].size(); j++)
			if (temp.count(phone_book[i].substr(0, j)))
			{
				answer = false;
				break;
			}

	return answer;
}