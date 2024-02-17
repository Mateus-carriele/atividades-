\\\\\ enviar uma imagen para cada uma com uma messagen e no fim me enviar uma messagen que deu certo\\\\\\\\\\\\


import pywhatkit
import time
from datetime import datetime

contatos  = ['*****', '******', '******', '********']

mae = 'C:/Users/claudio/Desktop/fotos/mae.jpeg'
paula = 'C:/Users/claudio/Desktop/fotos/paula.jpeg'
karina = 'C:/Users/claudio/Desktop/fotos/karina.jpeg'

for numero in contatos:
    if numero == contatos[0]:
        pywhatkit.sendwhats_image(numero, mae, "kkkkkkkkk", datetime.now().hour, datetime.now().minute + 2)
        time.sleep(10)
    elif numero == contatos[1]:
        pywhatkit.sendwhats_image(numero, karina, "kkkkkkkkkkkk", datetime.now().hour, datetime.now().minute + 2)
        time.sleep(10)
    elif numero == contatos[2]:
        pywhatkit.sendwhats_image(numero, paula, "kkkkkkkkkkk", datetime.now().hour, datetime.now().minute + 2)
        time.sleep(10)
    elif numero == contatos[3]:
        pywhatkit.sendwhatmsg(numero, "deu cerdo", datetime.now().hour, datetime.now().minute + 2)
        time.sleep(10)
