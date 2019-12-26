l = [int(input()) for i in range(10)]
outcomes = []
for x in l:
    outcomes.append(x%42)
outcomes = list(dict.fromkeys(outcomes))
print(len(outcomes))