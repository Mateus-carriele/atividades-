def tabela():
    print("1 – Alugar Carro")
    print("2 – Devolver Carro")
    print('3 – Carros alugados')
    print("0 - sair")
    return (tabela)

def devolver():
    placa = input("qual a placa do carro: ")
    dia = input('Digite o dia do seu aluguel(aaaa/mm/dd): ')
    ano = int(dia.split('/')[0])
    mes = int(dia.split('/')[1])
    ddia = int(dia.split('/')[2])
    dif = (diia // ddia), (mess // mes), (ano // ddia)
    d = (diia // ddia)
    m = ((mess - mes) * 30)
    dd = ((ano // ddia) * 365)
    resul = (d + m + dd) * 100
    print(f'o valor é $ {resul}')
    return (devolver)

m = 1
n = ['PKC1763', '13/05/2022', 'OKC1835', '15/03/2022', 'CTY8763', '23/06/2022']

while m != 0:
    tabela()
    m = int(input('Escolha uma opção: '))
    if m == 1:
        placa = input("qual a placa do carro: ")
        n.append(placa)
        date= input('Digite o dia do seu aluguel(aaaa/mm/dd): ')
        ddia = int(date.split('/')[0])
        mess = int(date.split('/')[1])
        diia = int(date.split('/')[2])
        n.append(date)
    elif m == 2:
        devolver()
        n.remove(placa)
        n.remove(date)
    elif m == 3:
        print(n)
    else:
        print('digite um numero valido')
