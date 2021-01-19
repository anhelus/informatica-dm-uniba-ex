from abc import ABC, abstractmethod
from typing import Any, List

class BaseSort(ABC):
	""" Class base for sorting.

	Args:
		ar: A list containing values to be sorted. 
	"""

	@staticmethod
	def check_numeric(val: Any) -> bool:
		""" Check whether a value is numeric.

		Returns True if val is numeric, False otherwise.
		"""
		return False or (type(val) == int or type(val) == float)

	def __init__(self, ar: List) -> None:
		self.ar = ar	

	@property
	def ar(self):
		return self.__ar
	
	@ar.setter
	def ar(self, value) -> List:
		if not len(value) > 0:
			raise ValueError("Error: array cannot be empty.")
		if not all([BaseSort.check_numeric(v) for v in value]):
			raise ValueError("Error: array cannot contain non-numeric elements.")
		self.__ar = value

	@abstractmethod
	def sort(self, inplace: bool=True) -> List:
		""" Sort an array of numeric values.

		Args:
			inplace: A boolean which states whether sorting should be performed in place.
		
		Returns:
			A list of ordered elements if inplace is False, nothing otherwise,
			as sorting is performed on the ar property.
		"""
		pass


class SelectionSort(BaseSort):
	""" Implements Selection Sort.

	Redefines the sort method of BaseSort.
	"""

	@staticmethod
	def _compare_sort(l_ar: List, r_ar: List) -> None:
		while len(r_ar) > 0:
			l_ar += [r_ar.pop(0)]
			for i in range(len(r_ar)):
				if r_ar[i] < l_ar[-1]:
					l_ar[-1], r_ar[i] = r_ar[i], l_ar[-1]

	def sort(self, inplace=True):
		l_ar = []
		if not inplace:
			aux_ar = self.ar[:]
		SelectionSort._compare_sort(l_ar, self.ar)
		if not inplace:
			self.ar = aux_ar
			return l_ar
		self.ar = l_ar
		return
