#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    int t[9][9];
    int j = 0;
    printf("問題を入力してください。\n");
    for(int i = 0; i < 9; i++)
    {
        scanf("%d %d %d %d %d %d %d %d %d", &t[j++][i], &t[j++][i], &t[j++][i], &t[j++][i], &t[j++][i], &t[j++][i], &t[j++][i], &t[j++][i], &t[j++][i]);
        j = 0;
    }
    for(int i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            printf("%d\t", t[j][i]);
        }
        puts("\n");
    }

    return 0;
}