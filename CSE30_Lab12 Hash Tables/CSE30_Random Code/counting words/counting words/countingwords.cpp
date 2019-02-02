//#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string str, word;


int main()
{
	fstream inFile;
	int count = 0;
	inFile.open("words.txt");
	while (getline(inFile, str)) {
	
		for (int i = 0; i < str.size
		(); i++) {

			if (str[i] == ' ') {
				count++;
				continue;
			}
		}count++;
	}
	cout << count << endl;
	inFile.close();
	return 0;
}
