myint = input()
mystring = input()

counter = 0

for x in mystring:
    if x == "-":
        counter += 1

print(counter)