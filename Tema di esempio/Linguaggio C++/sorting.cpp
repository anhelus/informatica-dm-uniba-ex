#include "sorting.h"
// TODO comment
sorting::SortHelper::SortHelper()
{
	this->to_sort = {};
}

sorting::SortHelper::SortHelper(vector<int> to_sort)
{
	setVector(to_sort);
}

void sorting::SortHelper::setVector(vector<int> to_sort)
{
	this->to_sort = to_sort;
}

vector<int> sorting::SortHelper::getVector()
{
	return this->to_sort;
}

void sorting::SortHelper::swap(int l_idx, int r_idx)
{
	int swap_val = this->to_sort[l_idx];
	this->to_sort[l_idx] = this->to_sort[r_idx];
	this->to_sort[r_idx] = swap_val;
}

void sorting::SortHelper::selectionSort()
{
	for (int i = 0; i < this->to_sort.size(); i++) {
		int curr = this->to_sort[i];
		int swap_idx = i + 1;
		bool to_swap = false;
		for (it = to_sort.begin() + swap_idx; it != to_sort.end(); ++it) {
			if (*it < curr) {
				curr = *it;
				swap_idx = it - to_sort.begin();
				to_swap = true;
			}
		}
		if (to_swap)
			swap(swap_idx, i);
	}
}
