#include <unistd.h>

int check_position(char box[8][8],int col , int i)
{
    int j;
    int k;

    j = 0;
    k = 0;
    while (j < 8)
    {
        if ( box [i][j] == 'Q')
            return (0);
    j++;
    }
    j = i;
    k = col;
    while (j > -1 && k > -1)
    {
        if  (box [j][k] == 'Q')
            return 0;
        j--;
        k--;
    }
     j = i;
    k = col;
    while (j < 8 && k > -1)
    {
        if  (box [j][k] == 'Q')
            return 0;
        j++;
        k--;
    }
    return (1);
}

