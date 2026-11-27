#include <stdio.h>

void analyzeMovement(int moves[], int n)
{
    int x = 0, y = 0;

    for(int i = 0; i < n; i++)
    {
        switch(moves[i])
        {
            case 1: y++; break;
            case 2: y--; break;
            case 3: x--; break;
            case 4: x++; break;
            default:
                printf("Invalid Command!\n");
        }
    }

    printf("\n===== ROBOT MOVEMENT REPORT =====\n");
    printf("Final X Position: %d\n", x);
    printf("Final Y Position: %d\n", y);

    if(x == 0 && y == 0)
        printf("Robot returned to starting point!\n");
    else
        printf("Robot reached a new position!\n");
}

int main()
{
    int moves[5];

    printf("===== ROBOT MOVEMENT ANALYZER =====\n");
    printf("\n1 = Forward");
    printf("\n2 = Backward");
    printf("\n3 = Left");
    printf("\n4 = Right\n");

    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter movement %d: ", i + 1);
        scanf("%d", &moves[i]);
    }

    analyzeMovement(moves, 5);

    return 0;
}
