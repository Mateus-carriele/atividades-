1)
velocidade = int(input('digide a velocidade: '))
multa = 0
if velocidade > 80:
    print('você foi multada')
if velocidade < 80:
    print('você não foi multado')
2)
velocidade = int(input('digide a velocidade: '))
multa = 0
if velocidade > 80:
    print('você foi multada')
    multa = 5 * (velocidade - 80)
if velocidade < 80:
    print('você não foi multado')
3)
salario = float(input('digite o seu salario: '))
aumento = 0
if salario > 1250 :
    aumento = salario * 0.10
    print(f'{aumento}')
if salario <= 1250:
    aumento = salario * 0.15
    print(f'{aumento}')
4)
salario = float(input('digite o seu salario: '))
imposto = 0
inss = 0
if salario < 1000:
    imposto = salario * 0
    inss = salario * 0
    print(f'seu salario e R${salario} imposto R$ {imposto} inss R$ {inss} ')
if salario >= 1000:
    if salario < 2000:
        imposto = salario * 0.10
        inss = salario * 0.11
        print(f'seu salario e R${salario} imposto R$ {imposto} inss R$ {inss} ')
if salario >= 2000:
    if salario < 3000:
        imposto = salario * 0.20
        inss = salario * 0.15
        print(f'seu salario e R${salario} imposto R$ {imposto} inss R$ {inss} ')
if salario >= 3000:
    imposto = salario * 0.27
    inss = salario * 0.20
    print(f'seu salario e R${salario} imposto R$ {imposto} inss R$ {inss} ')
