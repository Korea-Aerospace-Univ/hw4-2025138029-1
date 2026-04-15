#include <stdio.h>

int main(void)
{
    int limit = 0, ncnt = 0, wcnt = 0, ncnt_max = 0, wcnt_max = 0, i = 0;
    char sen;
    scanf("%d", &limit);
    
    for(i = 0; i < limit; i ++){
        scanf(" %c", &sen);
        
        if(sen >= 'a' && sen <= 'z'){
            wcnt += 1;
            ncnt = 0;
            if(wcnt > wcnt_max)
                wcnt_max = wcnt;
        }
        
        if(sen >= '0' && sen <= '9'){
            ncnt += 1;
            wcnt = 0;
            if(ncnt > ncnt_max)
                ncnt_max = ncnt;
        }
    }
    printf("%d\n%d", wcnt_max, ncnt_max);    
    return 0;
}
