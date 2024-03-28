#include <stdio.h>
#include <string.h>
#include <conio.h>


struct order{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
}p[10000];
int order_count = 0;

int main ()
{
    printf ("\n\n         \t\t -------  Welcome To BANGLA KHABAR RESTAURANT  -----  \n");
    while (1){
        printf("\n\n\n                                              1. Order \n");
        printf("\n\n\n                                              2. Exit\n ");
        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                printf("\nThank you ^_^ \n");
                printf ("\nHave a good day!\n\n");

                return 0;
            }
        }
    }
}

int order ()
{
    int n, in, qu;
    printf ("please enter your name: ");
    gets (p[order_count].name);
    p[order_count].order_number = 10000+order_count;
    items();
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;

    level:
    printf ("How many items you want to order? ");
    scanf ("%d", &n);

    getchar ();
    while (n--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 11 : {


        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (10*qu);
        break;
    }
    case 12 :{

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        p[order_count].cost += (10*qu);

        break;
    }
    case 13 :{


        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        p[order_count].cost += (20*qu);

        break;
    }
    case 14 :{

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (5*qu);

        break;
    }
    case 15 :{


        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (5*qu);

        break;
    }
    case 16 :{

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (10*qu);

        break;
    }
    case 17 : {
        printf ("Enter the size of grilled chicken: 1. quarter  2. half  3. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (80*qu);

        else if (i==2) p[order_count].cost += (160*qu);

        else  p[order_count].cost += (320*qu);

        break;
    }
    case 18 : {


        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (120*qu);
        break;
    }
    case 19 : {


        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (10*qu);
        break;
    }
    case 20 :{
        printf ("Enter the size of Coke: 1. 250mg  2. 500mg\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (20*qu);

        else p[order_count].cost += (30*qu);
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
        n++;
    }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\n\n\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf ("\n\n\nThank you %s for your order. \n\nYour bill is %d taka.\n\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);
    order_count ++;
}
void items ()
{
    printf("\n\n..................................MENU....................................\n");

    printf("\n\nItem Code#   Description-------------------Size--------------------Price(tk)\n");

    printf("\n\nItem Code#   Name  ------------------------Price(TAKA)\n");

    printf("[11]------   PORATA      ------------------ 10\n");
    printf("[12]------   TUNDUR RUTI ------------------ 10\n");
    printf("[13]------   NAN RUTI    ------------------ 20\n");
    printf("[14]------   PURI    ---------------------   5\n");
    printf("[15]------   SINGARA  ---------------------  5\n");
    printf("[16]------   SOMOSA    -------------------- 10\n");
    printf("[17]------   GRILL CHICKEN     ------------ 80/160/320\n");
    printf("[18]------   SHIK KABAB  ------------------ 120\n");
    printf("[19]------   DUDH CHA(Per Cup)    --------- 10\n");
    printf("[20]------   COLD DRINKS ------------------ 20/30\n\n");

}



