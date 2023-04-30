#include <stdio.h>

int main() {
    int t, n, i, j, count, k;
    int carneirinhos[10000];

    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d", &carneirinhos[i]);
        }
        count = n;
        for (i = 0; i < n; i++) {
            for (j = 0; j < i; j++) {
                if (carneirinhos[i] == carneirinhos[j]) {
                    count--;
                    break;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
