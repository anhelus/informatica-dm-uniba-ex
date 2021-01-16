def main_character(series):
	def supernatural():
		return "Sam Winchester"
	
	def breaking_bad():
		return "Walter White"
	
	if series == "Supernatural":
		return supernatural
	elif series == "Breaking Bad":
		return breaking_bad


def favorite_series(func):
	def internal_check():
		print("Checking my favorite series...")
		func()
		print("Got it!")
	return internal_check


def check():
	print('Sons of Anarchy')


@favorite_series
def print_fav_series_decorated():
	print('Breaking Bad')
