from classes.persons import Person, PersonProperty
from decorators.decorators import main_character, favorite_series, check, print_fav_series_decorated


if __name__ == "__main__":
	# p = Person('Jax', 'Teller')
	# print(p.first_name)
	# print(p._last_name)
	# try:
	# 	print(p.__age)
	# except AttributeError:
	# 	print('Age is private!')
	# full_name = p.return_full_name()
	# print(full_name)
	
	# # Inherited constructor using class methods
	# pb = Person.from_string('Bobby Munson 58')
	# print("{} {}".format(pb.first_name, pb._last_name))

	# # Statically check name
	# print(pb.check_is_valid('Li'))
	# print(Person.check_is_valid('X'))

	# # Check properties
	# pp = PersonProperty('Draco', 'Malfoy', 12)
	pp = PersonProperty('', 'Granger', 18)
	# print(pp.first_name)

	# # Functions as return values
	# mc = main_character("Supernatural")
	# print(mc())
	# # Prints function reference
	# print("Function reference: {}".format(mc))
	# # Prints function results
	# print("Function return value: {}".format(mc()))


	# print_fav_series = favorite_series(check)
	# print("Without decorators:")
	# print_fav_series()
	# print("With decorator:")
	# print_fav_series_decorated()


	