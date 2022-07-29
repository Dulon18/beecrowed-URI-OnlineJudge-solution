
dia,first_date=input().split()
first_date = int(first_date)
h1,m1,s1=map(int,input().split(":"))

dia,second_date=input().split()
second_date = int(second_date)
h2,m2,s2=map(int,input().split(":"))

seconds = s2 - s1
minute = m2 - m1
hour = h2 - h1
day = second_date - first_date

if(seconds<0):
	seconds+=60
	minute-=1

if(minute<0):
	minute+=60
	hour-=1

if(hour<0):
	hour+=24
	day-=1

print(f"{day} dia(s)")
print(f"{hour} hora(s)")
print(f"{minute} minuto(s)")
print(f"{seconds} segundo(s)")


