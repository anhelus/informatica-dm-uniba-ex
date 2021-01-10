#ifndef SORTING_H
#define SORTING_H
#include <vector>

using namespace std;

namespace sorting {
	class SortHelper;
}

class sorting::SortHelper {
private:
	vector<int> to_sort;
	vector<int>::iterator it;
public:
	SortHelper();
	SortHelper(vector<int> to_sort);
	void setVector(vector<int> to_sort);
	vector<int> getVector();
	void swap(int l_idx, int r_idx);
	void selectionSort();
	// TODO
	// void insertionSort();
	// void mergeSort();
	// void quickSort();
};

#endif // !SORTING_H
