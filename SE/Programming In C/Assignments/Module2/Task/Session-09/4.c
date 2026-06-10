#include <stdio.h>

int main()
{
    int cricketScores[3][2] =
    {
        {180, 175},
        {210, 195},
        {165, 190}
    };

    int i;

    for(i = 0; i < 3; i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
        {
            printf("Match %d Highest Score = %d\n",
                   i + 1,
                   cricketScores[i][0]);
        }
        else
        {
            printf("Match %d Highest Score = %d\n",
                   i + 1,
                   cricketScores[i][1]);
        }
    }
}