#include <stdio.h>

int NchooseK(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return NchooseK(n - 1, k - 1) + NchooseK(n - 1, k);
}

int main() {
    int n = 1;
    int k = 1;
    while ((n != 0 || k != 0)) {
        printf("Enter two integers (for n and k) separated by space:\n");
        scanf("%d%d", &n, &k);
        int result = NchooseK(n, k);
        printf("%d\n", result);
    }
}

