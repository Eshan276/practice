#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char a[101][3], temp1, temp2, temp3;
    int snakes1[] = {97, 92, 86, 62, 53, 47, 38, 29}, snakes2[] = {25, 70, 54, 37, 33, 5, 15, 9}; // 7
    int ladder2[] = {95, 88, 79, 77, 68, 34, 23}, ladder1[] = {85, 74, 41, 20, 32, 8, 4};         // 6
    int i, j, count, tcount, flag, win = 0, dice, point = 1, user = 0;
    count = 100;
    srand(time(NULL));
    for (i = 100; i > 0; i--) // making the table
    {
        a[i][0] = (count / 100) + '0';
        a[i][1] = ((count / 10) % 10) + '0';
        a[i][2] = (count % 10) + '0';
        if (a[i][0] == '0')
        {
            if (a[i][1] == '0')
            {
                a[i][0] = ' ';
                a[i][1] = ' ';
            }
            else
            {
                a[i][0] = ' ';
            }
        }
        count--;
    }
    a[1][1] = 'P';
    a[1][2] = ' ';
    temp1 = ' ';
    temp2 = ' ';
    temp3 = '1';
    j = 1; // last p kothay 6ilo
    while (win == 0)
    {

        flag = 0, tcount = 0;
        i = 100;
        printf("----------------------------------------------------------------------------------------------\n");
        while (i != 0) // printing the table
        {
            if (flag == 0)
            {
                tcount++;
                printf("%c%c%c ", a[i][0], a[i][1], a[i][2]);
                if (tcount == 10)
                {
                    i -= 10;
                    flag = 1;
                    tcount = 0;
                    printf("\n");
                }
                else
                {
                    i--;
                }
            }
            else if (flag == 1)
            {
                tcount++;
                printf("%c%c%c ", a[i][0], a[i][1], a[i][2]);
                if (tcount == 10)
                {
                    i -= 10;
                    flag = 0;
                    tcount = 0;
                    printf("\n");
                }
                else
                {
                    i++;
                }
            }
        }
        // printf("%c%c%c ", a[60][0], a[60][1], a[60][2]);
        printf("----------------------------------------------------------------------------------------------");
        printf("\nSNAKES- 97->25, 92->70, 86->54, 62->37, 53->33, 47->5, 38->15, 29->9");
        printf("\nLADDERS- 4->23, 8->34, 32->68, 20->77, 41->79, 74->88, 85->95");

        if (user != 1)
        {

            printf("\nPRESS 1 TO CAST THE DICE:");
            scanf("%d", &user);
            system("cls");
            if (user == 1)
            {
                dice = rand() % 6 + 1;

                printf("\nYOU HAVE CASTED %d\n", dice);

                point = point + dice;
                if (point > 100)
                {
                    point = point - dice;
                }
                else if (point == 100)
                {
                    printf("YOU HAVE WON THE MATCH");
                    win = 1;
                    return 0;
                }
                for (int k = 0; k < 8; k++)
                {
                    if (point == snakes1[k])
                    {
                        point = snakes2[k];
                        printf("\nA SNAKE BIT YOU AND YOU ARE AT %d NOW\n", point);
                        break;
                    }
                }
                for (int k = 0; k < 8; k++)
                {
                    if (point == ladder1[k])
                    {
                        point = ladder2[k];
                        printf("\nYOU CLIMBED UP A LADDER AND YOU ARE AT %d NOW\n", point);
                        break;
                    }
                }
                printf("\nYOU ARE NOW AT %d\n", point);
                a[j][0] = temp1;
                a[j][1] = temp2;
                a[j][2] = temp3;
                temp1 = a[point][0];
                temp2 = a[point][1];
                temp3 = a[point][2];
                a[point][0] = ' ';
                a[point][1] = 'P';
                a[point][2] = ' ';
            }
            else
            {
                printf("\nPRESS ONLY 1,YOU ARE STILL AT %d\n", point);
            }
        }
        j = point;
        user = 0;
    }
    return 0;
}
