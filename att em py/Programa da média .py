cont = 0
m = 1
n = []
while m!=0:
    print("1 - Inserir nota")
    print("2 - calcular média")
    print("0 - sair")
    m = float(input('Escolha uma opção: '))
    if m == 1:
        nota = float(input("digite a nota: "))
        n.append(nota)
        cont = cont + nota
    elif m == 2:
        media = cont / len(n)
        print(f'media = {media}')
    else:
        exit()
