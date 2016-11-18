/* One popular encoding method:
•	Encode the months from Jan to Dec as 'A' through 'L'
•	Encode each digit of the date as 'Q' through 'Z'
•	Encode the year as 'A' through 'Z' meaning 1 through 26, which is then added to 1995.
*Nadine found a particularly questionable loaf of bread with this date: ARZM.
*The program help to decode the date using in the bread level as stated above*/
#include <stdio.h>

int main(void)
{
    int month;    /* The expired month of the product */
    int digit1;     /*first digit of day*/
    int digit2;     /*second digit of day*/
    int day;      /* The expired day of the product */
    int year;     /* The expired year of the product */
    char var1;    /* The first letter of the date indicated*/
    char var2;    /* The second letter of the date indicated*/
    char var3;    /* The Third letter of the date indicated*/
    char var4;    /* The fourth letter of the date indicated*/

    /* Getting the letters of the date values*/
    printf("Enter the 1st Letter(in capital): ");
    scanf("%c",&var1);
    printf("\nEnter the 2nd Letter(in capital): ");
    scanf(" %c",&var2);
    printf("\nEnter the 3rd Letter(in capital): ");
    scanf(" %c",&var3);
    printf("\nEnter the 4th Letter(in capital): ");
    scanf(" %c",&var4);
    printf("\nYou entered %c%c%c%c\n",var1,var2,var3,var4);

    /*calculating first digit of day*/
    digit1=((var2)-80);
    printf("\nThe 1st digit of day is %d",digit1);

    /*calculating the second digit of day*/
    digit2=((var3-80));
    printf("\nThe 2nd digit of day is %d",digit2);

    /*calculating the expiring day*/
    if(digit2==10)
        day=((digit1*10)+0);
    else
        day=((digit1*10)+digit2);
    printf("\nThe expiring day is %d",day);

    /* Testing the calculated day to ensure it falls within 31 days */
    if(day>31)
    {
        printf("\nInvalid date\a\a\a");
        printf("\nPlease try again!");
    }
    else
    {
        /*Calculating the expired month*/

        month=((var1)-64);
        printf("\nThe expiring month is %d",month);

        /*Calculating expiring year*/
        year=((var4-64)+1995);
        printf("\nThe expiring year is %d",year);
        printf("\n\nProduct expiring date is %d:%d:%d\n",day,month,year);

        /*Formating date*/

        switch (month)   /* displaying results*/
        {
        case 1:          /* If month is January */
            if(day==1 || day==21 || day==31)
                printf("\n\nThe Product date: %d st January, %d.\n",day,year);
            if(day==2 || day==22 && day<=31)
                printf("\n\nThe Product date: %d nd January, %d.\n",day,year);
            if(day==3)
                printf("\n\nThe Product date: %d rd January, %d.\n",day,year);
            else
                printf("\n\nThe Product date: %d th January, %d.\n",day,year);
            break;
        case 2:          /* If month is February */
            if(day==1 || day==21 || day==31)
                printf("\n\nThe Product date: %d st February, %d.\n",day,year);
            if(day==2 || day==22)
                printf("\n\nThe Product date: %d nd February, %d.\n",day,year);
            if(day==3)
                printf("\n\nThe Product date: %d rd February, %d.\n",day,year);
            else
                printf("\n\nThe Product date: %d th February, %d.\n",day,year);
            break;
        case 3:          /* If month is March */
            if(day==1 || day==21 || day==31)
                printf("\n\nThe Product date: %d st March, %d.\n",day,year);
            if(day==2 || day==22)
                printf("\n\nThe Product date: %d nd March, %d.\n",day,year);
            if(day==3)
                printf("\n\nThe Product date: %d rd March, %d.\n",day,year);
            else
                printf("\n\nThe Product date: %d th March, %d.\n",day,year);
            break;
        case 4:          /* If month is April*/
            if(day==1 || day==21 || day==31)
                printf("\n\nThe Product date: %d st April, %d.\n",day,year);
            if(day==2 || day==22)
                printf("\n\nThe Product date: %d nd April, %d.\n",day,year);
            if(day==3)
                printf("\n\nThe Product date: %d rd April, %d.\n",day,year);
            else
                printf("\n\nThe Product date: %d th April, %d.\n",day,year);
            break;
        case 5:         /* if month is May */
            if(day==1 || day==21 || day==31)
                printf("\n\nThe Product date: %d st May, %d.\n",day,year);
            if(day==2 || day==22)
                printf("\n\nThe Product date: %d nd May, %d.",day,year);
            if(day==3)
                printf("\n\nThe Product date: %d rd May, %d.\n",day,year);
            else
                printf("\n\nThe Product date: %d th May, %d.\n",day,year);
            break;
        case 6:         /* if month is June */
            if(day==1 || day==21 || day==31)
                printf("\n\nThe Product date: %d st June, %d.\n",day,year);
            if(day==2 || day==22)
                printf("\n\nThe Product date: %d nd June, %d.\n",day,year);
            if(day==3)
                printf("\n\nThe Product date: %d rd June, %d.\n",day,year);
            else
                printf("\n\nThe Product date: %d th June, %d.\n",day,year);
            break;
        case 7:         /* if month is July */
            if(day==1 || day==21 || day==31)
                printf("\n\nThe Product date: %d st July, %d.\n",day,year);
            if(day==2 || day==22)
                printf("\n\nThe Product date: %d nd July, %d.\n",day,year);
            if(day==3)
                printf("\n\nThe Product date: %d rd July, %d.\n",day,year);
            else
                printf("\n\nThe Product date: %d th July, %d.\n",day,year);
            break;
        case 8:         /* if month is August */
            if(day==1 || day==21 || day==31)
                printf("\n\nThe Product date: %d st August, %d.\n",day,year);
            if(day==2 || day==22)
                printf("\n\nThe Product date: %d nd August, %d.\n",day,year);
            if(day==3)
                printf("\n\nThe Product date: %d rd August, %d.\n",day,year);
            else
                printf("\n\nThe Product date: %d th August, %d.\n",day,year);
            break;
        case 9:         /* if month is September */
            if(day==1 || day==21 || day==31)
                printf("\n\nThe Product date: %d st September, %d.\n",day,year);
            if(day==2 || day==22)
                printf("\n\nThe Product date: %d nd September, %d.\n",day,year);
            if(day==3)
                printf("\n\nThe Product date: %d rd September, %d.\n",day,year);
            else
                printf("\n\nThe Product date: %d th September, %d.\n",day,year);
            break;
        case 10:        /* if month is October */
            if(day==1 || day==21 || day==31)
                printf("\n\nThe Product date: %d st October, %d.\n",day,year);
            if(day==2 || day==22)
                printf("\n\nThe Product date: %d nd October, %d.\n",day,year);
            if(day==3)
                printf("\n\nThe Product date: %d rd October, %d.\n",day,year);
            else
                printf("\n\nThe Product date: %d th October, %d.\n",day,year);
            break;
        case 11:       /* if month is November */
            if(day==1 || day==21 || day==31)
                printf("\n\nThe Product date: %d st November, %d.\n",day,year);
            if(day==2 || day==22)
                printf("\n\nThe Product date: %d nd November, %d.\n\n",day,year);
            if(day==3)
                printf("\n\nThe Product date: %d rd November, %d.\n",day,year);
            else
                printf("\n\nThe Product date: %d th November, %d.\n",day,year);
            break;
        case 12:       /* if month is December */
            if(day==1 || day==21 || day==31)
                printf("\n\nThe Product date: %d st December, %d.\n",day,year);
            if(day==2 || day==22)
                printf("\n\nThe Product date: %d nd December, %d.\n",day,year);
            if(day==3)
                printf("\n\nThe Product date: %d rd December, %d.\n",day,year);
            else
                printf("\n\nThe Product date: %d th December, %d.\n",day,year);
            break;
        default:
            printf("Invalid date\a\nPlease try again!");

        }
    }
    return 0;
}
