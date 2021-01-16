class Person(object):

	def __init__(self, first_name, last_name, age=18):
		self.first_name = first_name
		self._last_name = last_name
		self.__age = age
	
	@classmethod
	def from_string(cls, person_string: str):
		fn, ln, age = person_string.split(' ')
		return Person(fn, ln, age)
	
	@staticmethod
	def check_is_valid(first_name):
		return False or len(first_name) >= 2


class PersonProperty():

	def __init__(self, first_name, last_name, age):
		self.first_name = first_name
		self.last_name = last_name
		self.age = age
	
	@property
	def first_name(self):
		return self.__first_name
	
	@first_name.setter
	def first_name(self, value):
		if len(value) < 2:
			raise ValueError('Name must be longer than two characters')
		else:
			self.__first_name = value