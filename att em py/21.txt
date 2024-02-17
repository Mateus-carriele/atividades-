1)
def x (a):
    if a%2==0:
        print('É par')
    else:
        print('É impar')
x(5)
x(8)
2)
def x (a):
    r = a + 1
    return (r)
num = x(5)
print(num)
3)
def x(a, b):
    if a > b:
        print(a)
    else:
        print(b)
    return (a,b)

num = x(10, 9)
print(num)
4)
def x(a):
    if a >= 7 and a<11:
        print('aprovado')
    elif a >= 4 and a<7:
        print('prova final')
    else:
        print('reprovado')

x(2)
x(6)
x(9)
5)
def x(a, b):
    imc = a / b**2
    return (imc)

a = float(input('digite a sua massa'))
b = float(input('digite a sua altura'))

num = x(a, b)
print(num)
6)
def x(a):
    area = a ** 2
    return (area)

a = float(input())

num = x(a)
print(num)
7)
def x(a, b):
    area =(b * a) / 2
    return (area)

b = float(input('digite a base: '))
a = float(input('digite a altura: '))

num = x(a, b)
print(f'a area é {num}')
