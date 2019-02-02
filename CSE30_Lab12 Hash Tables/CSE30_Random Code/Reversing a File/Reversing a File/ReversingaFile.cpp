#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
	string line;
	fstream inFile;
	vector<string> code;
	inFile.open("code.cpp");

	if (inFile.is_open()) {
		while (getline(inFile, line)) {
			code.push_back(line);
		}
		inFile.close();
	}

	for (int i = code.size() - 1; i >= 0; i--) {
		cout << code.size() - i - 1 << ": ";
		cout << code[i] << endl;
	}
	return 0;
}