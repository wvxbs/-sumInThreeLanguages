import time

def sumNumber(firstNumber,finalNumber):
    i = 0
    FirstNumber = firstNumber

    while i <= finalNumber:
        FirstNumber = i + FirstNumber
        i = + 1 + i

    return FirstNumber

def main():
    initial = time.time()
    final = 0

    result = sumNumber(0, 1000000)
    print("Resultado:", result)

    final = (time.time() - initial)  * 1000

    print("Tempo Decorrido:", final, "Milissegundos")

main()