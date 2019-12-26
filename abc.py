a,b,c = [int(x) for x in input().split()] 
l=[]
l.append(a)
l.append(b)
l.append(c)
a = min(l)
c = max(l)
for x in l:
    if x>a and x<c:
        b=x
mstring = input()
l2 = [] #list bitch
for i in mstring:
    if i == "A":
        l2.append(a)
    if i == "B":
        l2.append(b)
    if i == "C":
        l2.append(c)
print(*l2,sep=" ")