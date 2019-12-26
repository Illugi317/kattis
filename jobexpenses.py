n = int(input())
l = list(map(int,input().strip().split()))[:n]
summa = 0
for x in l:
    if x < 0:
        summa += abs(x)
print(summa)
        