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

queue_classica(queue)
queue_con_deque(queue_d)