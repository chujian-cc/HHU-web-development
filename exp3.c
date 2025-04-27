#include <stdio.h>
#include <stdbool.h>

int main() {
    char str[1010];// use array to store the input
    int n = 0;// n is the length of user input
    while (1) {
        n = 0;
        bool flag = false;// if flag is false means the input is a pure positive number
        while (scanf(" %c", &str[n]))// scanf input into str[]
        {
            if (str[n] == '\n')// if scanf \n break
                break;
            n++;
        }
        for (int i = 0; i < n; i++)// travers the input, 0 ~ n-1
        {
            if (!(str[i] >= '0' && str[i] <= '9'))// if it str[i] is not a digit, flag => true, we need to scanf again
            {
                flag = true;
                break;// stop checking, beacause it is not a pure positive digit now
            }
        }
        if (flag)
            printf("your input is not a positive number, please input again\n");
        else
            break;
    }
    printf("%d\n", n);
    for (int i = n - 1; i >= 0; i--)// because we need to reverse the number, so 'i' from n - 1 to 0
        printf("%c", str[i]);
    return 0;
}
