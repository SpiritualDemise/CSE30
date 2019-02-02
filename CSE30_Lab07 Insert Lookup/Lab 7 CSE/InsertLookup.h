#pragma once
#ifndef InsertLookup_h
#define InsertLookup_h
#include<iterator>
#include<list>

bool find(long* list, long size, long value) {
	int mid;
	mid = list[size / 2];

	if (mid == value) {
		return true;
	}
	else {
		for (int i = (size / 2); i > 0; i--) {
			if (list[i] == value) {
				return true;
			}
			else
				return false;
		}
	}return false;
}

void insertion_sort(long list[], long size) {
	long n = size;
	for (long i = size - 1; i < n; i++) {
		long j = n - 1;
		long temp = list[j];
		while (j > 0 && list[j - 1] > temp) {
			long temp = list[j];
			list[j] = list[j - 1];

			j = j - 1;
		}
		list[j] = temp;
	}
}




void insert(long* list, long size, long value) {
	list[size - 1] = value;
	insertion_sort(list, size);
}

#endif