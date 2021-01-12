def estrai_classico(lista, lettera):
	output = []
	for l in lista:
		if l[0] == lettera:
			output.append(l)
	return output


def quadrati(val_massimo):
	output = []
	for v in range(val_massimo):
		output.append(v ** 2)
	return output


def quadrato(numero):
	return numero ** 2


if __name__ == "__main__":
	lista_nomi = ["Jax Teller", "Walter White", "Billy Butcher", "Luke Skywalker", "Bobby Singer", "Johnny Lawrence"]
	
	# Trovo tutti i nomi che iniziano per "J" con il metodo classico
	lista_nomi_j = estrai_classico(lista_nomi, "J")

	# Trovo tutti i nomi che iniziano per "B" con una list comprehension
	lista_nomi_b = [nome for nome in lista_nomi if nome[0] == "B"]

	print("Lista dei nomi: {}".format(lista_nomi))
	print("Lista dei nomi che iniziano con J (con metodo classico): {}".format(lista_nomi_j))
	print("Lista dei nomi che iniziano con B (con list comprehension): {}".format(lista_nomi_b))

	print("Lista dei quadrati fino a 10 calcolata col metodo classico: {}".format(quadrati(10)))
	print("Lista dei quadrati calcolata con list comprehension: {}".format([quadrato(i) for i in range(10)]))

	# Mostro "pari" per i numeri pari, e "dispari" per i numeri dispari; utile per l'if/else
	lista_pari_dispari = ["{} è pari".format(i) if i % 2 == 0 else "{} è dispari".format(i) for i in range(1, 10)] 
	print("Lista pari e dispari: {}".format(lista_pari_dispari))
	
	# Esempio di assignment expression
	fib = [0, 1]
	fib += [(fib := [fib[1], fib[0] + fib[1]]) and fib[1] for i in range(10)]
	print(fib)