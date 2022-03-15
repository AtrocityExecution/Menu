#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int weight;
    int height;
    float x, y;
    int menu;

    {
        /*This shows the user menu options.*/
        printf("Ello gov'nor. What's on the menu?\n");
        printf("1). Information about the two programs\n");
        printf("2). Body mass index calculator\n");
        printf("3). Cartesian plane locater\n");
        printf("4). Exit\n");
        scanf("%d", &menu);

        /*This is the switch for each option.*/
        switch (menu)
        {
            /*Gives information on the two programs created for the user.*/
            case 1:
            printf("The body mass index calculator calculates using your given weight and height to determine if you have healthy weight.\n");
            printf("\nThe Cartesian plane locater uses the x and y coordinates to find which quadrant the point is on.\n");
            break;

            /*This program takes the user's weight and height and calculates their BMI.*/
            case 2:
            printf("What is your weight(lb) gov'nor?\n");
            scanf("%d", &weight);

            printf("\nWhat is your height(in) gov'nor?\n");
            scanf("%d", &height);

            double BMI = weight / pow(height,2) * 703;

            printf("Your BMI is %.1f gov'nor\n", BMI);

            if (BMI <= 18.5)
                printf("\nYou are underweight, gov'nor.\n");
            else if ( BMI <= 24.9)
                printf("\nYou have normal weight, gov'nor.\n");
            else if ( BMI <= 29.9)
                printf("\nYou are overweight, gov'nor.\n");
            else if ( BMI >= 30)
                printf("\nYou are obese, gov'nor. May I suggest you to the gym?\n");

            break;

            /*This program takes the user's x and y coordinates and tells which quadrant it is in,
             if it's on the origin, or if it lies on the x or y axis.*/
            case 3:
            printf("Enter the point(x,y)\n");
            scanf("%f%f", &x, &y);

            if (x == 0 && y == 0)
                printf("Point lies on Origin gov'nor.\n");
            else if (y == 0 && x > 0)
                printf("Point lies on positive x-axis gov'nor.\n");
            else if (x == 0 && y > 0)
                printf("Point lies on positive y-axis gov'nor.\n");
            else if (y == 0 && x < 0)
                printf("Point lies on negative x-axis gov'nor.\n");
            else if (x == 0 && y < 0)
                printf("Point lies on negative y-axis gov'nor.\n");
            else if (x > 0 && y > 0)
                printf("Point lies on Quadrant 1 gov'nor.\n");
            else if (x < 0 && y > 0)
                printf("Point lies on Quadrant 2 gov'nor.\n");
            else if (x < 0 && y < 0)
                printf("Point lies on Quadrant 3 gov'nor.\n");
            else if (x > 0 && y < 0)
                printf("Point lies on Quadrant 4 gov'nor.\n");

            break;

            /*Allows the user to exit the program.*/
            case 4:
                printf("\nBye gov'nor!\n");
            return 0;

            /*This is the default option for the user if
            they do not input the options listed.*/
            default:
            printf("\nInvalid input, Leave gov'nor.\n");
            return 0;
        }

    }

    return 0;
}
