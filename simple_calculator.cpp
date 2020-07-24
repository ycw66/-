#include<stdio.h>

int main()
{
    
    int sum = 0, x, ok = 1;
    char ch;
    scanf("%d", &sum);
    while ( (ch = getchar()) != '=')
    {
        if (!ok) continue;
        scanf("%d", &x);
        switch(ch)
        {
            case '+':
                sum += x;
                break;
            case '-':
                sum -= x;
                break;
            case '*':
                sum *= x;
                break;
            case '/':
                if (x==0)
                {
                    ok = 0;
                }
                else
                {
                    sum /= x;
                }
                break;
            default:
                ok = 0;
        }
    }
    if (ok)
        printf("%d\n", sum);
    else
        printf("ERROR\n");

    return 0;
}