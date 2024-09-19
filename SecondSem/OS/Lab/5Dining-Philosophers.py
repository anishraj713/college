# import threading
# import time
# import random


# def philosopher(index, forkOnLeft, forkOnRight, running):
#     while running():
#         time.sleep(random.uniform(1, 3))
#         with forkOnLeft, forkOnRight:
#             print("Philosopher", index, "is eating.")
#             time.sleep(random.uniform(1, 3))
#             print("Philosopher", index, "has finished eating.")


# def main():
#     forks = [threading.Lock() for _ in range(5)]
#     running_flag = True
#     philosophers = [
#         threading.Thread(
#             target=philosopher,
#             args=(i, forks[i], forks[(i + 1) % 5], lambda: running_flag),
#         )
#         for i in range(5)
#     ]

#     for p in philosophers:
#         p.start()
#     time.sleep(20)
#     running_flag = False
#     print("Finishing...")


# if __name__ == "__main__":
#     main()


from threading import Thread
from threading import Semaphore
import time

# Semaphores needed
no_philo = 5
forks = [Semaphore(1) for i in range(no_philo)]
status = ["thinking" for i in range(no_philo)]


def philosopher(i):
    print("Philosopher", i, "is", status[i])
    time.sleep(0.3)
    print("Philosopher", i, "is Hungry")
    forks[i].acquire()
    forks[(i + 1) % no_philo].acquire()

    print("Philosopher", i, "is eating")
    time.sleep(1)

    print("Philosopher", i, "Is finished eating and now thinking")

    forks[i].release()
    forks[(i + 1) % no_philo].release()


import random

total = [Thread(target=philosopher, args=[i]) for i in range(no_philo)]
random.shuffle(total) 

for i in total:
    i.start()
    i.join()
