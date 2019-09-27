#include<unistd.h>

void show_table(char box[8][8])
{
    int i;
    int j;

    i = -1;
    j = -1;
    while ( i++ < 7)
        {
            while (j++ <7)
            {
                write (1,&box[i][j],1);
                write (1,"|",1);
            }
            j = -1;
           write (1,"\n",1);
        }
               write (1,"\n",1);
           write (1,"\n",1);


} 