1)
b = [6.5, 5.9, 3.6, 5.9]
b.append(9.4)

print(b[0], b[4])
print(len(b))
2)
b = []
for x in range(1, 11):
     m = int(input())
     b.append(m)

print(b[0])
print(b[2])
print(b[9])
3)
b = []
cont = 0

for x in range(1, 11):
    m = int(input())
    b.append(m)
    cont = cont + m

print(f'o maior numero é {max(b)}')
print(f'o menor munero é {min(b)}')
print(f'a soma é {cont}')
print(f'a media é {cont/10}')
4)a)
b = []

for x in range(1, 11):
    m = int(input())
    b.append(m)

print(b)
b)
b = []
cont = 0

for x in range(1, 11):
    m = int(input())
    b.append(m)

for i in range(len(b)):
    if b[i] > 7:
        cont  = cont + 1
print(cont)
c)
b = []
cont = 0

for x in range(1, 11):
    m = int(input())
    b.append(m)

for i in range(len(b)):
    if b[i] <= 7:
        cont = cont+ 1
print(cont)
d)
b = []
cont = 0

for x in range(1, 11):
    m = int(input())
    b.append(m)
    cont = cont + m

print(cont)

e)
b = []
cont = 0

for x in range(1, 11):
    m = int(input())
    b.append(m)
    cont = cont + m

print(f'a media é {cont/10}')
