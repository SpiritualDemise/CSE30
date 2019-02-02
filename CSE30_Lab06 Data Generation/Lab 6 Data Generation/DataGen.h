
#ifndef DataGen_h
#define DataGen_h

#include "RandomSupport.h"

void quicksort(long *arr, long left, long right) {
	long min = (left + right) / 2;

	long i = left;
	long j = right;
	long pivot = arr[min];

	while (left<j || i<right)
	{
		while (arr[i]<pivot)
			i++;
		while (arr[j]>pivot)
			j--;

		if (i <= j) {
			long temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
		else {
			if (left<j)
				quicksort(arr, left, j);
			if (i<right)
				quicksort(arr, i, right);
			return;
		}
	}
}





/*void insertion_sort(long list[], long size) {
	long n = size;
	for (long i = 1; i < n; i++) {
		long j = i;
		while (j > 0 && list[j - 1] > list[j]) {
			long temp = list[j];
			list[j] = list[j - 1];
			list[j - 1] = temp;
			j = j - 1;
		}
	}
}


*/


void efficientRandomSortedList(long temp[], long s) {
	// Get a new random device
	randomizer device = new_randomizer();
	// Get a uniform distribution from 1 to 1000
	uniform_distribution range = new_distribution(1, 1000);

	for (long i = 0; i < s; i++) {
		// At every cell of the array, insert a randomly selected number
		// from distribution defined above
		temp[i] = sample(range, device) + temp[i-1];
	}
	long t;
	// Now sort the array using insertion_sort

}
	

#endif /* DataGen_h */