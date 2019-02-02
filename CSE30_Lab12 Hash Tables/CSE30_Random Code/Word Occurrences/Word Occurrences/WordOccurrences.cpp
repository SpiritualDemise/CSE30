
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm> 
using namespace std;



int main()
{
	fstream inFile;
	string str, word, emp;
	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		word[i] = toupper(word[i]);

	}
	

	int times = 0;

	inFile.open("words.txt");


	while (inFile >> str) {
		for (int i = 0; i < str.size(); i++) {
			str[i] = toupper(str[i]);
		
			if (ispunct(str[i])) str.erase(i--, 1);
		}



		if (str == word) {
			times++;
	
		}
	}

	cout << times << endl;
	inFile.close();
	return 0;
}