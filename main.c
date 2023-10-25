#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char mas[10][21];
    int i;
    int x =10, y = 5;
    char key;
    int ox,oy;
    char playagain[10];


    srand(time(NULL));
    int ax =rand() * 1.0 / RAND_MAX * 18 + 1, ay = rand() * 1.0 / RAND_MAX * 8 + 1;
    int counter = 0;
    do{
        sprintf(mas[0],"####################");
        for(i=1; i < 9; i++)
            sprintf(mas[i],"#                  #");
        sprintf(mas[9],"####################");

        mas[y][x] = '@';
        mas[ay][ax] = '*';
        system("cls");
        printf("Length: %d\n", counter);
        for(i = 0; i < 10; i++)
            printf("%s\n", mas[i]);

        key = getch();

        ox = x;
        oy = y;
        if(key == 'w') y--;
        if(key == 's') y++;
        if(key == 'a') x--;
        if(key == 'd') x++;
        if (mas[y][x] == '#') {
            system("cls");
            printf("Losed , length = %d\nDo you want play again? (yes/no): ", counter);

            scanf("%s", playagain);

            if (strcmp(playagain, "yes") == 0) {
                counter = 0;
                x = 10;
                y = 5;
                ax = rand() * 1.0 / RAND_MAX * 18 + 1;
                ay = rand() * 1.0 / RAND_MAX * 8 + 1;
            }
            else {
                break;
            }
        }
        if( (x == ax) && (y == ay)){
            counter++;
            ax = rand() * 1.0 / RAND_MAX * 18 + 1;
            ay = rand() * 1.0 / RAND_MAX * 8 + 1;
        }


    }

    while (key != 'e');



    return 0;
}
