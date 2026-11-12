#include <stdio.h>

int main()
{
    char answer;
    int score = 0;

    printf("\n===== GENERAL KNOWLEDGE QUIZ =====\n");

    printf("\n1. Which is the largest planet?\n");
    printf("A. Earth\nB. Jupiter\nC. Mars\n");
    printf("Answer: ");
    scanf(" %c", &answer);

    if(answer == 'B' || answer == 'b')
        score++;

    printf("\n2. How many days are in a week?\n");
    printf("A. 5\nB. 6\nC. 7\n");
    printf("Answer: ");
    scanf(" %c", &answer);

    if(answer == 'C' || answer == 'c')
        score++;

    printf("\n3. Which language is used in C programming?\n");
    printf("A. C\nB. HTML\nC. CSS\n");
    printf("Answer: ");
    scanf(" %c", &answer);

    if(answer == 'A' || answer == 'a')
        score++;

    printf("\n4. What is the capital of Japan?\n");
    printf("A. Seoul\nB. Tokyo\nC. Beijing\n");
    printf("Answer: ");
    scanf(" %c", &answer);

    if(answer == 'B' || answer == 'b')
        score++;

    printf("\n5. How many sides does a triangle have?\n");
    printf("A. 3\nB. 4\nC. 5\n");
    printf("Answer: ");
    scanf(" %c", &answer);

    if(answer == 'A' || answer == 'a')
        score++;

    printf("\n===== QUIZ RESULT =====\n");
    printf("Your Score: %d/5\n", score);

    if(score == 5)
        printf("Excellent Performance!");
    else if(score >= 3)
        printf("Good Job!");
    else
        printf("Keep Practicing!");

    return 0;
}
