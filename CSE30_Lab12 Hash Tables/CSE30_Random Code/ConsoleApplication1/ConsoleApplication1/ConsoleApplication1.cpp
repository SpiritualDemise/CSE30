// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int x;
	string y;
	bool z = true;

	while (z == true) {
		
		cin >> y;

		cin >> x;

		if (x == -1)
			cout << "" << endl;

		if (x == -2)
			break;

		for (int i = 0; i < x; i++) {
			cout << y;
	}



	}
	
	return 0;
}

//Help from Jian :)