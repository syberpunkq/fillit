#include <stdio.h>

int compare(int a[][8], int b[][8])
{
    int i = 0;

    while(i < 8)
    {
        if (a[0][i] < b[0][i])
            return 1;
        else if (a[0][i] > b [0][i])
            return -1;
        i--;
    }
    return (0);
}

int main()
{   
    int first[4][4];
    int second[4][4];

    int table1[8][8] = { '#','#','#','.','.','.','.','.' };
    int table2[8][8] = { '#','.','#','#','.','.','.','.' };
    printf("result = %d", compare(table2, table1));
    return (0);
}
