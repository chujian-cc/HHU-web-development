#include <stdio.h>

int main() {
    int num, str[1010], cnt = 1; // num is the number user input, str[] to store the num reverse, cnt : to count the len of num
    scanf("%d", &num); // input the num
    while (num) { // if num!= 0, num is true, loop keep going
        str[cnt++] = num % 10; // num % 10 is the last digit of num, example: 4321 % 10 = 1, the cnt++ while record one digit
        num /= 10; // we record the last digit, so we need the digit before the last, 4321 -> 432
    }
    printf("%d\n", cnt - 1); // output the cnt
    for (int i = 1; i < cnt; i++) { // traverse the str[], it is the reverse of the num
        printf("%d", str[i]);
    }
    return 0;
}
