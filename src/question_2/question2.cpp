#include "question2.h"

int get_fib_sequence(int n) {
    if (n <= 1) {
        return n;
    } else {
        int fib[n + 1];
        fib[0] = 0;
        fib[1] = 1;

        for (int i = 2; i <= n; ++i) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        return fib[n];
    }
}

bool test_config()
{
    return true;
}