# tests.py
""" Contains dummy tests, not created using an unit test framework.
"""
from app.algorithms.sorting import SelectionSort


def test_input():
	s = SelectionSort([1])
	try:
		s.ar = []
	except ValueError:
		print("Testing empty arrays handling....\t\t\t -> OK")
	try:
		s.ar = ["1", 2, 3]
	except ValueError:
		print("Testing non-numeric arrays handling....\t\t\t -> OK")


def test_sorting():
	s = SelectionSort([5, 2, 12, 7])
	try:
		s.sort()
		assert s.ar == [2, 5, 7, 12]
		print("Testing inplace sorting....\t\t\t\t -> OK")
	except:
		print("Testing inplace sorting....\t\t\t\t -> ERROR")
	s.ar = [5, 2, 12, 7]
	try:
		l_ar = s.sort(inplace=False)
		assert l_ar == [2, 5, 7, 12]
		print("Testing non-inplace sorting....\t\t\t\t -> OK")
	except AssertionError:
		print("Testing non-inplace sorting....\t\t\t\t -> ERROR")


if __name__ == "__main__":
	test_input()
	test_sorting()
