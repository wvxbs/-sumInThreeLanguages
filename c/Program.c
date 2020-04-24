#include <stdio.h>
#include <time.h>

long long sumNumbers(long long firstNumber, long long finalNumber);                               
double calculateTime(clock_t initial, clock_t final);

void main() {
    clock_t initial, final;

    initial = clock();

    long long result = sumNumbers(0, 1000000);
    printf("\nResultado: %lld", result);

    final = clock();

    double time = calculateTime(initial, final);

    printf("\nTempo decorrido: %f milissegundos", time);
}
 
long long sumNumbers (long long firstNumber, long long finalNumber) {
    for(int i = 0; i <= finalNumber; i++) {
        firstNumber = firstNumber+ i;
    }

    return firstNumber;
}

double calculateTime (clock_t initial, clock_t final) {
    double Time = ((double)(final - initial) / CLOCKS_PER_SEC) * 1000;

    return Time;
}