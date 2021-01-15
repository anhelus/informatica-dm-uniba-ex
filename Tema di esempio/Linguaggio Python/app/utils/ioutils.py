import os
from typing import List


def is_file_input(im: str) -> bool:
	""" Determine user's input mode.
	
	Determine whether the user should provide the input using a file or a shell.
	Raises a ValueError if input_mode format is not expected.

	Params:
		im: A one-character string. 'f' for file input, 's' for shell.
	
	Returns:
		A boolean which is True if user's input is provided using a file,
		False otherwise.
	"""
	if len(im) > 1 or not (im == 'f' or im == 's'):
		raise ValueError("Please provide only one among the following characters: \
			'f' for file, 's' for shell.")
	else:
		return False or im == 'f'


def read_file(fn: str, fp: str) -> str:
	""" Read a file, returning its value as a string.

	Read a file whose name is file_name located at file_path.

	Params:
		fn: A string representing the name of the file.
		fp: A string representing the absolute path of the file.

	Returns:
		A string with the content of the file. 
	"""
	try:
		with open (os.path.join(fp, fn), "r") as rf:
			return rf.read()
	except FileNotFoundError as e:
		print("Error while reading input file:\n{}\nPlease check file name and path.".format(e))


class FilePrinter():
	""" Print values within an iterable to a given file.

	Args:
		fn: A string representing the name of the file.
		fp: A string representing the absolute path of the file.
		dl: A string representing the delimiter to be written within two
			values in the iterable.
		op: A string to be written before values in the iterable.
		cl: A string to be written after values in the iterable.
	"""

	def __init__(self,
		fn: str,
		fp: str,
		dl: str=",",
		op: str="[",
		cl: str="]") -> None:
		self.fn = fn
		self.fp = fp
		self.dl = dl
		self.op = op
		self.cl = cl
	
	@property
	def fn(self) -> str:
		return self._fn
	
	@fn.setter
	def fn(self, value):
		if not len(value) > 0:
			raise ValueError('Error: file name cannot be empty.')
		if value.split('.')[-1] != 'txt':
			raise ValueError('Error: only files with .txt extensions are allowed.')
		self._fn = value
	
	@property
	def fp(self) -> str:
		return self._fp
	
	@fp.setter
	def fp(self, value):
		if not len(value) > 0:
			raise ValueError('Error: file path cannot be empty.')
		self._fp = value
	
	@property
	def dl(self) -> str:
		return self._dl
	
	@dl.setter
	def dl(self, value):
		if not len(value) > 0:
			print('Warning: empty delimiter. Using default value.')
			self._dl = ','
		else:
			self._dl = value
	
	@property
	def op(self) -> str:
		return self._op
	
	@op.setter
	def op(self, value):
		self._op = value
	
	@property
	def cl(self) -> str:
		return self._cl
	
	@cl.setter
	def cl(self, value):
		self._cl = value
	
	def print_list(self, vals: List) -> None:
		""" Print a list of integers.

		Args:
			vals: A list of integers to be printed within the output file.
		"""
		with open(os.path.join(self.fp, self.fn), "w") as wf:
			wf.write(self.op)
			for val in range(len(vals) - 1):
				wf.write('{}{}'.format(vals[val], self.dl))
			wf.write('{}{}'.format(vals[-1], self.cl))
