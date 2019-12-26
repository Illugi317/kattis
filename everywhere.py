testcases = int(input())

for t in range(testcases):
    a = int(input())
    l = [input() for i in range(a)]
    outcomes = list(dict.fromkeys(l))
    print(len(outcomes))
