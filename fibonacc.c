#include <stdio.h>

int fibonacci(int n) {
    int a = 0;
    int b = 1;
    
    if (n == 0)
        return a;
    else if (n == 1)
        return b; 
    
    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    
    return b;
}

int main() {
    int n = 23; // O número de Fibonacci desejado
    
    int result = fibonacci(n);
    
    printf("O %dº número de Fibonacci é: %d\n", n, result);
    
    return 0;
}
