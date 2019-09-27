#include <unistd.h>
int check_position(char box[8][8],int col , int i);
void show_table(char box[8][8]);

int solve (char box[8][8] , int col) 
{
    if (col >= 8)
          show_table(box);
   int i;
    i = 0;
    while (i <8)
    {
        if (check_position(box,col,i) == 1)
        {
            box[i][col] = 'Q';
            if (solve(box,col + 1) )
              show_table(box);
        box[i][col] = '*';
        }
        i++;
    }
    return (0);
    
}