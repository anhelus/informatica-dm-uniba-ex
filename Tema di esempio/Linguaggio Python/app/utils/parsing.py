from typing import List

class Parser():
	""" Convert a string into a numeric list.

	Args:
		st: An input to be converted into a numeric list.
		dl: A string which splits contiguous numeric elements.
		rm: A list of characters which should be removed.
		to_float: A boolean which stats if the list should be converted into floats.
	"""

	def __init__(self, st: str, dl: str, rm: List = [], to_float: bool = False) -> None:
		self.st = st
		self.dl = dl
		self.rm = rm
		self.to_float = to_float

	@property
	def st(self):
		return self._st
	
	@st.setter
	def st(self, value) -> str:
		if not len(value) > 0:
			raise ValueError('Error: input string cannot be empty.')
		self._st = value

	@property
	def dl(self):
		return self._dl
	
	@dl.setter
	def dl(self, value):
		self._dl = value

	@property
	def rm(self):
		return self._rm
	
	@rm.setter
	def rm(self, value):
		# Slight violation of duck typing.
		if not type(value) == list:
			raise ValueError('Error: a list of strings should be given for removal')
		self._rm = value

	@property
	def to_float(self):
		return self._to_float
	
	@to_float.setter
	def to_float(self, value):
		self._to_float = value

	@staticmethod
	def check_valid(val):
		try:
			int(val)
			return True
		except ValueError:
			return False

	def parse(self):
		for i in range(len(self.rm)):
			self.st = self.st.replace(self.rm[i], '')
		if self.to_float:
			return [float(int(v)) for v in self.st.split(self.dl) if Parser.check_valid(v)]
		else:
			return [int(v) for v in self.st.split(self.dl) if Parser.check_valid(v)]
