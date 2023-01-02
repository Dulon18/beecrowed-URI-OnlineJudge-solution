a=[]
x=float(input())
for i in range(100):
    a.append(x)
    print("N[%d] = %0.4f" % (i, x))
    x=x/2
