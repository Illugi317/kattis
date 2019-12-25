import random
for x in range(150):
    for y in range(51):
        i = random.randint(0,1)
        if not i:
            print(-1,end=' ')
        else:
            print(1,end=' ')    