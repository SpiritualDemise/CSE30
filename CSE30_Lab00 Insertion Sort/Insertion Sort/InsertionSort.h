#ifndef InsertionSort_h
#define InsertionSort_h

#include "Swap.h"

// Declare and define the insertion sort function below

void insertion_sort(int x[], int y) {

	int j;


	for (int i = 1; i <= y; i++) {


		j = i;


		while (j > 0 && x[j - 1] > x[j]) {






			// You *MUST* use the swap operation defined in Swap.h to swap elements

			swap(x, j - 1, j);

			j = j - 1;

		}


	}
}
// Do not write any code below this line
#endif