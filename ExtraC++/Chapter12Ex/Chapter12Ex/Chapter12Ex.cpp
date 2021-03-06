#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void ChapterTwelveTwo() {
	const string testStr = "ABC54301 TFTFTFTT TFTFTFFFTTFT";
	ifstream infile("TestFile.txt");
	vector<char[64]> studentIds;
	string answerKey;
	getline(infile, answerKey);

	do {
		string line;
		getline(infile, line);
		if (line.length() > 0) {
			cout << line.substr(0, line.find(' '));
			string answers = line.substr(line.find(' ') + 1);
			double right = 0;
			for (int i = 0; i < answerKey.length(); i++) {
				if (answerKey[i] == answers[i]) {
					right += 2;
				}
				else if (answerKey[i] != ' ') {
					right--;
				}
			}
			int score = 100 * (right / (2 * answerKey.length()));
			cout << " " << score << "% ";
			if (score >= 90) {
				cout << "A" << endl;
			}
			else if (score >= 80) {
				cout << "B" << endl;
			}
			else if (score >= 70) {
				cout << "C" << endl;
			}
			else if (score >= 60) {
				cout << "D" << endl;
			}
			else {
				cout << "F" << endl;
			}
		}
		else {
			break;
		}
	} while (infile.good());
	cout << "End Problem Two" << endl;
}

int main()
{
	cout << "Chapter 12 Extended Problems" << endl;
	ChapterTwelveTwo();
}