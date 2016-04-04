
#include "NumGroup.h"

NumGroup::NumGroup() {
	num_size = 0;
	nums[num_size] = { };
	}

NumGroup::NumGroup(int num_arr[]) {
	num_size = sizeof(num_arr) / sizeof(int);
	nums[num_size] = num_arr[num_size];
	}

bool NumGroup::contains(int num) {
	for (int i = 0; i < num_size; ++i) {
		if (nums[i] == num) return true;
		}

	return false;
	}