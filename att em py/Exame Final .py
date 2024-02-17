import datetime

hoje = datetime.date.today()
print(hoje)

def tabela():
    print("1 – Alugar Carro")
    print("2 – Devolver Carro")
    print('3 – Carros alugados')
    print("0 - sair")
    return (tabela)

def aluga():
    placa = input("qual a placa do carro: ")
    n.append(placa)
    date = input('qual a data do aluguel :')
    n.append(date)
    return (aluga)

def devolver():
    placa = input("qual a placa do carro: ")
    d = input('qual a data de aluguel (aaaa/mm/dd) :')
    ano = int(d.split('/')[0])
    mes = int(d.split('/')[1])
    dia = int(d.split('/')[2])
    print(ano, mes, dia)
    data = datetime.date(ano,mes,dia)
    dif = hoje - data
    v = dif * 100
    print(f'o valor é $ {v}')
    return (devolver)
    
m = 1
n = ['PKC1763', '13/05/2022', 'OKC1835', '15/03/2022', 'CTY8763', '23/06/2022']

while m != 0:
    tabela()
    m = int(input('Escolha uma opção: '))
    if m == 1:
        aluga()
    elif m == 2:
        devolver()
    elif m == 3:
        print(n)
    else:
        print('digite um numero valido')
