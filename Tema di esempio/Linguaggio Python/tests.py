# tests.py
""" Contains dummy tests, not created using an unit test framework.
"""
from app.algorithms.sorting import SelectionSort
from app.utils.ioutils import FilePrinter


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
	"""
	GIVEN a numeric input list
	WHEN the sorting algorithm works
	THEN a sorted list will be given as output
	"""
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


def test_classmethod():
	"""
	GIVEN a string reprenting required data
	WHEN string is correctly interpreted
	THEN a FilePrinter instance is created
	"""
	s = ('some_name.txt some_path some_del some_op some_cl')
	p = FilePrinter.from_string(s)
	try:
		assert p.fn == 'some_name.txt'
		assert p.fp == 'some_path'
		assert p.dl == 'some_del'
		assert p.op == 'some_op'
		assert p.cl == 'some_cl'
		print("Testing file printer's class method....\t\t\t -> OK")
	except AssertionError as e:
		print("Testing file printer's class method....\t\t\t -> ERROR")


if __name__ == "__main__":
	test_input()
	test_sorting()
	test_classmethod()
