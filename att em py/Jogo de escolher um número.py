import random
num = random.randint(0, 10)
c = 0
e = 10
acertou = False
while not acertou:
    a = int(input(f"digite um numero entre {c} e {e} "))

    if a == num:
        acertou = True

    if a > num:
        e = a
    elif a < num:
        c = a

print('você acertou')
