from sys import stdin

def p(part,whole):
    return 100 * float(part)/float(whole)

nr = int(input())
for t in range(nr):
    for line in stdin:
        l = [int(i) for i in line.split()]
        l.pop(0)
        avg = sum(l) / len(l)
        hmav = 0
        for x in l:
            if x > avg:
                hmav += 1
        percent = p(hmav,len(l))
        print('{:,.3f}'.format(percent)+"%")