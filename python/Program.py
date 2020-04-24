from timeit import default_timer as timer

initial = timer()
final = 0

def sumNumber(firstNumber,finalNumber):
    i = 0
    FirstNumber = firstNumber

    while i <= finalNumber:
        FirstNumber = i + FirstNumber
        i = + 1 + i

    return FirstNumber

def main():
    result = sumNumber(0, 1000000)
    print("Resultado:", result)

    final = (timer() - initial) * 10

    print("Tempo Decorrido:", final, "Segundos")
main()