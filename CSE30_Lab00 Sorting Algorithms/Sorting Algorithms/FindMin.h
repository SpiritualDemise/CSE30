#ifndef FindMin_h
#define FindMin_h


// Declare and define the findMin function here

int findMin(int m[], int n, int o) {
	int min;

	for (int i = 0; i < n; i++) {

		for (int j = 1; j <= n; j++) {

			if (m[i] < m[j])

				min = m[i];

		}

	}

}
// Do not write any code below this line
#endif
