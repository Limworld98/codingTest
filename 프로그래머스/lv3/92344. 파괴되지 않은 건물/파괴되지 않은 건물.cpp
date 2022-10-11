#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<vector<int>> skill) {
	vector<vector<int>> tempBoard;
	vector<int> temp;
	for (int i = 0; i <= board[0].size(); i++)
		temp.push_back(0);

	for (int i = 0; i <= board.size(); i++)
		tempBoard.push_back(temp);


	int x1, x2, y1, y2, degree;


	for (int i = 0; i < skill.size(); i++) {
		x1 = skill[i][1];
		y1 = skill[i][2];
		x2 = skill[i][3];
		y2 = skill[i][4];
		degree = skill[i][5];

		if (skill[i][0] == 1) { //공격
			tempBoard[x1][y1] -= degree;
			tempBoard[x2 + 1][y1] += degree;
			tempBoard[x1][y2 + 1] += degree;
			tempBoard[x2 + 1][y2 + 1] -= degree;
		}
		else { // 힐
			tempBoard[x1][y1] += degree;
			tempBoard[x2 + 1][y1] -= degree;
			tempBoard[x1][y2 + 1] -= degree;
			tempBoard[x2 + 1][y2 + 1] += degree;
		}
	}

	for (int i = 0; i < tempBoard.size()-1; i++) {
		for (int j = 0; j < tempBoard[i].size()-1; j++) {
			tempBoard[i][j + 1] += tempBoard[i][j];
		}
	}
	for (int i = 0; i < tempBoard.size() - 1; i++) {
		for (int j = 0; j < tempBoard[i].size() - 1; j++) {
			tempBoard[i+1][j] += tempBoard[i][j];
		}
	}


	int answer = 0;

	for (int i = 0; i < board.size(); i++)
		for (int j = 0; j < board[i].size(); j++)
		{
			board[i][j] += tempBoard[i][j];

			if (board[i][j] >= 1)
				answer++;
		}
	



	return answer;
}