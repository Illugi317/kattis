char = input()
m = []
m.append(char[0])
count = 0
for x in char:
    count += 1
    if x == "-":
        m.append(char[count])
print(*m,sep='')