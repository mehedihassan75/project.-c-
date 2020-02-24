
#include <stdio.h>
#include <conio.h>

char a[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void board();

int main()
{
    int player = 1, m, choice;
    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && a[1] == '1')
            a[1] = mark;

        else if (choice == 2 && a[2] == '2')
            a[2] = mark;

        else if (choice == 3 && a[3] == '3')
            a[3] = mark;

        else if (choice == 4 && a[4] == '4')
            a[4] = mark;

        else if (choice == 5 && a[5] == '5')
            a[5] = mark;

        else if (choice == 6 && a[6] == '6')
            a[6] = mark;

        else if (choice == 7 && a[7] == '7')
            a[7] = mark;

        else if (choice == 8 && a[8] == '8')
            a[8] = mark;

        else if (choice == 9 && a[9] == '9')
            a[9] = mark;

        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        m = checkwin();

        player++;
    }while (m ==  - 1);

    board();

    if (m == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}

int checkwin()
{
    if (a[1] == a[2] && a[2] == a[3])
        return 1;

    else if (a[4] == a[5] && a[5] == a[6])
        return 1;

    else if (a[7] == a[8] && a[8] == a[9])
        return 1;

    else if (a[1] == a[4] && a[4] == a[7])
        return 1;

    else if (a[2] == a[5] && a[5] == a[8])
        return 1;

    else if (a[3] == a[6] && a[6] == a[9])
        return 1;

    else if (a[1] == a[5] && a[5] == a[9])
        return 1;

    else if (a[3] == a[5] && a[5] == a[7])
        return 1;

    else if (a[1] != '1' && a[2] != '2' && a[3] != '3' &&
        a[4] != '4' && a[5] != '5' && a[6] != '6' && a[7]
        != '7' && a[8] != '8' && a[9] != '9')

        return 0;
    else
        return  - 1;
}

void board()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1], a[2], a[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[4], a[5], a[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[7], a[8], a[9]);
    printf("     |     |     \n\n");
}



