
a,b,c = list(map(float,input().split()))

if(a < b):
    x = a
    a = b
    b = x
if(b < c):
    x = b
    b = c
    c = x
if(a < b):
    x = a
    a = b
    b = x
    
if(a>=(b+c)):
    print("NAO FORMA TRIANGULO")
elif(a*a == (b*b+c*c)):
     print("TRIANGULO RETANGULO")
elif(a * a > (b*b+ c*c)):
    print("TRIANGULO OBTUSANGULO")
elif(a*a<(b*b + c*c)):
    print("TRIANGULO ACUTANGULO")
if(a == b and b == c):
        print("TRIANGULO EQUILATERO")
elif(a == b or b == c):
        print("TRIANGULO ISOSCELES")
    
    
