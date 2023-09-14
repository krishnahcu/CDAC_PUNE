#include <stdio.h>
void Fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series for %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int numTerms;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &numTerms);

    Fibonacci(numTerms);

    return 0;
}
