//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    int freq[10] = {0};

    while (num > 0) {
        int d = num % 10;
        freq[d]++;
        num /= 10;
    }

    int maxFreq = freq[0], digit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            digit = i;
        }
    }

    printf("Digit occurring most times: %d (appeared %d times)\n", digit, maxFreq);
    return 0;
}
