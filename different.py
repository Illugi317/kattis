from sys import stdin

for line in stdin:
    a,b = [int(i) for i in line.split()] #I love LC
    if a > b:
        print(a-b)
    else:
        print(b-a)