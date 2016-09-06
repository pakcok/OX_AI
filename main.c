#include <stdlib.h>

int Player_pick = 1;
int AI_pick = 3;
int maze[3][3]={0,0,0,0,0,0,0,0,0};

int Player_turn()
{
    int row;
    int col;
    while(1)
    {
        printf("#######################################################################\n");
        printf("Please Enter the Row:\t\t");
        scanf("%d", &row);
        printf("Please Enter the Column:\t");
        scanf("%d", &col);
        printf("You Picked [%d][%d] \n", row, col);

        if(row>=3 || col>=3)
        {
            printf("Picked row or column is oversized, Please pick the number less than 3. \n");
        }

        else if(maze[row][col]==0)
        {
            maze[row][col] = Player_pick;
            return 0;
        }
        else
        {
            printf("The box you picked is not empty, Please pick another one. \n");
        }
    }
}

int AI_turn()
{

}

int check_line()
{
    int r, c;
    int line_sum;
    for(r=0; r<3; r++)
    {
        line_sum=0;
        for(c=0; c<3; c++)
        {
            line_sum+=maze[r][c];
        }
        if(line_sum==6)
        {
            target(r);
        }
    }
}

int target_row(int row)
    if(maze[r][0]==maze[r][1])
    {
        return 2;
    }
    else if(maze[r][0]==maze[r][2])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int target_col(int row, int col)
{
    if(maze[row][col]==maze[row][col])
    {
        return 2;
    }
    else if(maze[row][0]==maze[row][2])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{

    printf("Player's Pick = %d%\n", Player_pick);
    printf("AI's pick = %d\n", AI_pick);
    while(1)
    {
        printf("Maze\t%d\t%d\t%d\n",maze[0][0],maze[0][1],maze[0][2]);
        printf("\t%d\t%d\t%d\n",maze[1][0],maze[1][1],maze[1][2]);
        printf("\t%d\t%d\t%d\n\n",maze[2][0],maze[2][1],maze[2][2]);
        Player_turn();
        AI_turn();
    }
}
