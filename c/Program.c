#include <stdio.h>
#include <time.h>

void SumNumbers(long long firstNumber, long long finalNumber);                               
void calculateTime(clock_t initial, clock_t final);

void main() {
    SumNumbers(0, 1000000);
}
 
void SumNumbers (long long firstNumber, long long finalNumber) {

    clock_t initial, final;

    initial = clock();

    for(int i = 0; i <= finalNumber; i++) {
        firstNumber = firstNumber+ i;
    }

    final = clock();

    printf("\nResultado: %lld", firstNumber);

    calculateTime(initial, final);
}

void calculateTime (clock_t initial, clock_t final) {
    double time = final - initial / CLOCKS_PER_SEC;

    printf("\nTempo decorrido: %f milissegundos", time);
}