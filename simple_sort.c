#include <stdio.h>

int main()
{ // variable declaration
    int a, b, c, i, j, k, temp;
    // take input
    scanf("%d %d %d", &a, &b, &c);
    i = a;
    j = b;
    k = c;
    // check condition for assending order
    if (a > b)
    { // swaping
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    { // swaping
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    { // swaping
        temp = b;
        b = c;
        c = temp;
    }
    // print the assending order
    printf("%d\n%d\n%d\n\n", a, b, c);
    // print the readed number
    printf("%d\n%d\n%d\n", i, j, k);
    return 0;
}