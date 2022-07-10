a = input()
b = input()
c = input()

if a == 'vertebrado' and b == 'ave' and c == 'carnivoro': result = 'aguia'
if a == 'vertebrado' and b == 'ave' and c == 'onivoro': result = 'pomba'

if a == 'vertebrado' and b == 'mamifero' and c == 'onivoro':result = 'homem'

if a == 'vertebrado' and b == 'mamifero' and c == 'herbivoro':result = 'vaca'

if a == 'invertebrado' and b == 'inseto' and c == 'hematofago':result = 'pulga'

if a == 'invertebrado' and b == 'inseto' and c == 'herbivoro':result = 'lagarta'

if a == 'invertebrado' and b == 'anelideo' and c == 'hematofago':result = 'sanguessuga'

if a == 'invertebrado' and b == 'anelideo' and c == 'onivoro':result = 'minhoca'

print(result)
