#include <stdio.h>
#include <time.h>

void SumNumbers(long long firstNumber, long long finalNumber);                               
void calculateTime(clock_t start, clock_t end);

void main() {
    SumNumbers(0, 1000000);
}
 
void SumNumbers (long long firstNumber, long long finalNumber) {

    clock_t start, end;

    start = clock();

    for(int i = 0; i <= finalNumber; i++) {
        firstNumber = firstNumber+ i;
    }

    end = clock();

    printf("\nReusltado: %lld", firstNumber);

    calculateTime(start, end);
}

void calculateTime (clock_t start, clock_t end) {
    double time = end - start / CLOCKS_PER_SEC;

    printf("\nTempo decorrido: %f", time);
}