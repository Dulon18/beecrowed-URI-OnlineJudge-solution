T=int(input())
a=0
for i in range(1000):
    print("N[%d] = %d" %(i,a))
    a += 1
    if (a == T):
        a = 0
