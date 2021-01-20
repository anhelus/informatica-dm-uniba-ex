import os
from utils.ioutils import is_file_input, read_file, FilePrinter
from algorithms.sorting import SelectionSort
from utils.parsing import Parser


if __name__ == "__main__":
	l = []
	to_remove = ['[', ']']
	if is_file_input(input('Please enter f for reading from file, s for reading from shell.\n')):
		file_name = input('Please enter the name of the file which contains the numeric array.\n')
		s = read_file(file_name, os.path.dirname(os.path.realpath(__file__)))
		p = Parser(s, ",", rm=to_remove)
	else:
		s = input('Please enter a numeric array.\n')
		p = Parser(s, ",", rm=to_remove)
	l = p.parse()
	sr = SelectionSort(l)
	sr.sort()
	print("Sorted array: {}".format(sr.ar))
	save_to_file = input('Save to file?')
	if save_to_file == 'Y':
		file_name = input('Please enter file name')
		fp = FilePrinter(file_name, os.getcwd())
		fp.print_list(sr.ar)
