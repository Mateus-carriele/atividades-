1)
km = float(input('digite a distância a ser prtcorrida em km: '))
if (km <200):
    preco = km*0.5
    print(f'o preso a ser cobrado é R$: {preco}')
else:
    preco = km*0.45
    print(f'o preso a ser cobrado é R$: {preco}')
2)
media = float(input('digite a sua media: '))
if (media >= 7):
    print('aprovado')
else:
    print('reprovado')
3)
sexo = int(input('digite o  sue sexo (m) 0 e (h) 1: '))
idade = int(input('digite a sua idade: '))
if (sexo == 1 ):
    anos = 70-idade
    print(f'faltom {anos} anos')
else:
    anos = 65-idade
    print(f'faltom {anos} anos')
