ans = 2*round(float(input())*1000*(5280/4854))
if ans % 2:
    print(str(ans//2)+"0.5")
else:
    print(ans//2)