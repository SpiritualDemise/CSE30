
#ifndef DataGen_h
#define DataGen_h

#include "RandomSupport.h"

void quickSort(long list[], int left, long right) {

	int i = left;
	int j = right;
	int temp;
	int pivot = list[(left + right) / 2];

	while (i <= j) {

		i++;

		while (i <= j) {

			j--;

			if (i <= j) {

				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
				i++;
				j--;

			}

		}

	}
	if (left < j) {
		quickSort(list, left, j);
	}
	if (i < left) {
		quickSort(list, i, right);

	}
}

void efficientRandomSortedList(long temp[], long s, long t) {
	// Get a new random device
	randomizer device = new_randomizer();
	// Get a uniform distribution from 1 to 1000
	uniform_distribution range = new_distribution(1, 1000);

	for (long i = 0; i < s; i++) {
		// At every cell of the array, insert a randomly selected number
		// from distribution defined above
		temp[i] = sample(range, device);
	}

	// Now sort the array using insertion_sort
	quickSort(temp, s, t);
}


#endif /* DataGen_h */