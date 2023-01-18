#include <stdio.h>
#include <time.h>

int map[9][9];

void makemap()
{
    int choiceT[9][9], choiceY[9][9], choiceM[9][9];
    int canselect[9];
    srand((unsigned int)time(NULL));

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            map[i][j] = 0;
            choiceT[i][j] = i+1;
            choiceY[i][j] = j+1;
            choiceM[i][j] = i+1;
        }
        canselect[i] = 0;
    }
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            for(int k = 0; k < 9; k++)
            {
                for(int l = 0; l < 9; l++)
                {
                    if((choiceT[i][j] == choiceY) && (choiceY == choiceM))
                    {
                    }
                }
            }
            for(int k = 0; k < 3; k++)
            {
                for(int l = 0; l < 3; l++)
                {
                    if((i < 3) && (j < 3) && (map[k][l] > 0))
                    {
                    }
                    else if((i < 3) && (j > 2) && (j < 6) && (map[k][l + 3] > 0))
                    {
                    }
                    else if((i < 3) && (j > 5) && (map[k][l + 6] > 0))
                    {
                    }
                    else if((i > 2) && (i < 6) && (j < 3) && (map[k + 3][l] > 0))
                    {
                    }
                    else if((i > 2) && (i < 6) && (j > 2) && (j < 6) && (map[k + 3][l + 3] > 0))
                    {
                    }
                    else if((i > 2) && (i < 6) && (j > 5) && (map[k + 3][l + 6] > 0))
                    {
                    }
                    else if((i > 5) && (j < 3) && (map[k + 6][l] > 0))
                    {
                    }
                    else if((i > 5) && (j > 2) && (j < 6) && (map[k + 6][l + 3] > 0))
                    {
                    }
                    else if((i > 5) && (j > 5) && (map[k + 6][l + 6] > 0))
                    {
                    }
                }
            }
        }
    }
}

int main(void)
{
    makemap();

    return 0;
}