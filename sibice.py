import math
n,a,b = [int(x) for x in input().split()]
c = (a**2)+(b**2)

for i in range(n):
    v = int(input())
    if v <= math.sqrt(c):
        print("DA")
    else:
        print("NE")