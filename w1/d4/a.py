import random

a = random.randint(10000, 50000)
l = []
for i in range(a):
    l.append(i + 1)

print(a)
print(*l)
print(random.randint(10000, 50000))