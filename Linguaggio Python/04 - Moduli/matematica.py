# matematica.py

def somma(a, b):
	return a + b


def moltiplica(a, b):
	return a * b


def fibonacci(val_max):
	fib = [0, 1]
	fib += [(fib := [fib[1], fib[0] + fib[1]]) and fib[1] for i in range(val_max)]
	return fib