from collections import deque
from time import time

def queue_classica(queue, pushed=1):
	t1 = time()
	queue.insert(0, pushed)
	queue.pop(0)
	t2 = time()
	print("Tempo necessario con queue classica: {}".format(t2-t1))

def queue_con_deque(queue, pushed=1):
	t1 = time()
	queue.append(pushed)
	queue.popleft()
	t2 = time()
	print("Tempo necessario con deque: {}".format(t2-t1))

queue = list(range(10000000))
queue_d = deque(queue)

# chiamo la funzione queue_classica sulla lista queue
queue_classica(queue)
# chiamo la funzione queue_con_deque sull'oggetto di tipo deque chiamato queue_d
queue_con_deque(queue_d)