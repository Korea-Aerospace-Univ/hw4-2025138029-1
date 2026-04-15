#include <stdio.h>

int main(void)
{
    int answer = 0, index = 0, a = 0;
    scanf("%d", &answer);
    
    do {
        scanf("%d", &a);
        if(answer > a)
            printf("%d<?\n", a);
        else if(answer < a)
            printf("%d>?\n", a);
        else
            printf("%d==?\n%d", a, index);
        index ++;
    } while(answer != a);
    printf("%d==?\n%d", a, index);
    return 0;
}
