
 //       Write a program that read month and date and show day


#include <stdio.h>
#include <conio.h>

int day, day1, day2, day02, day3, day4, day5, day6, day7, day8, day9, day10, day11, day12, year1, year, leapyear, i;
int main()
{
    printf("\n\t\tYEAR\t :\t");
    scanf("%d", &year1);

    if(year1 >= 2013) year = year1 - 2013;
    else  year = -(2013 - year1);

    leapyear = (year / 4);

    day1 = (year + leapyear + 2) % 7;
    if ((year+1)%4 == 0) {
        day02 = day8 = (year + leapyear + 5) % 7;
         day3 = day11 = (year + leapyear + 6) % 7;
         day4 = day7 = (year + leapyear + 2) % 7;
         day5 = (year + leapyear + 4) % 7;
         day6 = (year + leapyear + 0) % 7;
         day9 = day12 = (year + leapyear + 1) % 7;
        day10 = (year + leapyear + 3) % 7;
    } else {
        day2 = day3 = day11 = (year + leapyear + 5) % 7;
        day4 = day7 = (year + leapyear + 1) % 7;
        day5 = (year + leapyear + 3) % 7;
        day6 = (year + leapyear + 6) % 7;
        day8 = (year + leapyear + 4) % 7;
        day9 = day12 = (year + leapyear + 0) % 7;
        day10 = (year + leapyear + 2) % 7;
    }
    printf("\r\r\n\n\n\n", YEAR());
    getch();
    return 0;
}

int YEAR()
{
    system("cls");
    MONTH06(), MONTH1();
    if ((year+1)%4 == 0) MONTH02();
    else    MONTH2();
    MONTH3(), MONTH4(), MONTH5(), MONTH6(), MONTH7(), MONTH8(), MONTH9(), MONTH10(), MONTH11(), MONTH12(), MONTHH12();
}

int MONTH1()
{
    printf("\n\t\tJANUARY, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day1; i++)                          printf("      ");
    for (i = 1; i <= 7 - day1; i++)                      printf("%6d", i);   printf("\n");
    for (i = 8 - day1; i <= 14 - day1; i++)              printf("%6d", i);   printf("\n");
    for (i = 15 - day1; i <= 21 - day1; i++)             printf("%6d",i);    printf("\n");
    for (i = 22 - day1; i <= 28 - day1; i++)             printf("%6d",i);    printf("\n");
    if (day1 >= 0 && day1 <= 4){
        for (i = 29 - day1; i <= 31; i++)                printf("%6d",i);    printf("\n");
    } else {
        for (i = 29 - day1; i <= 29 - day1 + 6; i++)     printf("%6d",i);    printf("\n");
        for (i = 29 - day1 + 7; i <= 31; i++)            printf("%6d",i);    printf("\n");
    }
}
int MONTH2()
{
    printf("\n\t\tFEBUARY, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day2; i++)                  printf("      ");
    for (i = 1; i <= 7 - day2; i++)              printf("%6d", i);   printf("\n");
    for (i = 8 - day2; i <= 14 - day2; i++)      printf("%6d", i);   printf("\n");
    for (i = 15 - day2; i <= 21 - day2; i++)     printf("%6d", i);   printf("\n");
    for (i = 22 - day2; i <= 28 - day2; i++)     printf("%6d", i);   printf("\n");
    for (i = 29 - day2; i <= 28; i++)            printf("%6d", i);   printf("\n");
}

int MONTH02()
{
    printf("\n\t\tFEBRUARY, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day02; i++)                             printf("      ");
    for (i = 1; i <= 7 - day02; i++)                         printf("%6d", i);   printf("\n");
    for (i = 8 - day02; i <= 14 - day02; i++)                printf("%6d", i);   printf("\n");
    for (i = 15 - day02; i <= 21 - day02; i++)               printf("%6d", i);   printf("\n");
    for (i = 22 - day02; i <= 28 - day02; i++)               printf("%6d", i);   printf("\n");
    if (day02 >= 0 && day02 <= 4){
        for (i = 29 - day02; i <= 29; i++)                   printf("%6d", i);   printf("\n");
    } else {
        for (i = 29 - day02; i <= 29 - day02 + 6; i++)       printf("%6d", i);   printf("\n");
        for (i = 29 - day02 + 7; i <= 29; i++)               printf("%6d", i);   printf("\n");
    }
}

int MONTH3()
{
    printf("\n\t\tMARCH, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day3; i++)                              printf("      ");
    for (i = 1; i <= 7 - day3; i++)                          printf("%6d", i);   printf("\n");
    for (i = 8 - day3; i <= 14 - day3; i++)                  printf("%6d", i);   printf("\n");
    for (i = 15 - day3; i <= 21 - day3; i++)                 printf("%6d", i);   printf("\n");
    for (i = 22 - day3; i <= 28 - day3; i++)                 printf("%6d", i);   printf("\n");
    if (day3 >= 0 && day3 <= 4){
        for (i = 29 - day3; i <= 31; i++)                    printf("%6d", i);   printf("\n");
    } else {
        for (i = 29 - day3; i <= 29 - day3 + 6; i++)         printf("%6d", i);   printf("\n");
        for (i = 29 - day3 + 7; i <= 31; i++)                printf("%6d", i);   printf("\n");
    }
}

int MONTH4()
{
    printf("\n\t\tAPRIL, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day4; i++)                              printf("      ");
    for (i = 1; i <= 7 - day4; i++)                          printf("%6d", i);   printf("\n");
    for (i = 8 - day4; i <= 14 - day4; i++)                  printf("%6d", i);   printf("\n");
    for (i = 15 - day4; i <= 21 - day4; i++)                 printf("%6d", i);   printf("\n");
    for (i = 22 - day4; i <= 28 - day4; i++)                 printf("%6d", i);   printf("\n");
    if (day4 >= 0 && day4 <= 4){
        for (i = 29 - day4; i <= 30; i++)                    printf("%6d", i);   printf("\n");
    } else {
        for (i = 29 - day4; i <= 29 - day4 + 6; i++)         printf("%6d", i);   printf("\n");
        for (i = 29 - day4 + 7; i <= 30; i++)                printf("%6d", i);   printf("\n");
    }
}

int MONTH5()
{

    printf("\n\t\t MAY, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day5; i++)                              printf("      ");
    for (i = 1; i <= 7 - day5; i++)                          printf("%6d", i);   printf("\n");
    for (i = 8 - day5; i <= 14 - day5; i++)                  printf("%6d", i);   printf("\n");
    for (i = 15 - day5; i <= 21 - day5; i++)                 printf("%6d", i);   printf("\n");
    for (i = 22 - day5; i <= 28 - day5; i++)                 printf("%6d", i);   printf("\n");
    if (day5 >= 0 && day5 <= 4){
        for (i = 29 - day5; i <= 31; i++)                    printf("%6d", i);   printf("\n");
    } else {
        for (i = 29 - day5; i <= 29 - day5 + 6; i++)         printf("%6d", i);   printf("\n");
        for (i = 29 - day5 + 7; i <= 31; i++)                printf("%6d", i);   printf("\n");
    }
}

int MONTH06()
{
    time_t date;
    struct tm *show;
    char buffer[80];

    time( &date );
    show = localtime( &date );

    strftime(buffer,80,"%d/%m/%Y", show);
    printf("\n   %s\t\t\t", buffer );
    strftime(buffer,80,"%I:%M:%S%p", show);
    printf("%s\n", buffer );
}

int MONTH6()
{
    printf("\n\t\tJUNE, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day6; i++)                          printf("      ");
    for (i = 1; i <= 7 - day6; i++)                      printf("%6d", i);   printf("\n");
    for (i = 8 - day6; i <= 14 - day6; i++)              printf("%6d", i);   printf("\n");
    for (i = 15 - day6; i <= 21 - day6; i++)             printf("%6d", i);   printf("\n");
    for (i = 22 - day6; i <= 28 - day6; i++)             printf("%6d", i);   printf("\n");
    if (day6 >= 0 && day6 <= 4){
        for (i = 29 - day6; i <= 30; i++)                printf("%6d", i);   printf("\n");
    } else {
        for (i = 29 - day6; i <= 29 - day6 + 6; i++)     printf("%6d", i);   printf("\n");
        for (i = 29 - day6 + 7; i <= 30; i++)            printf("%6d", i);   printf("\n");
    }
}

int MONTH7()
{
    printf("\n\t\tJULY, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day7; i++)                          printf("      ");
    for (i = 1; i <= 7 - day7; i++)                      printf("%6d", i);   printf("\n");
    for (i = 8 - day7; i <= 14 - day7; i++)              printf("%6d", i);   printf("\n");
    for (i = 15 - day7; i <= 21 - day7; i++)             printf("%6d", i);   printf("\n");
    for (i = 22 - day7; i <= 28 - day7; i++)             printf("%6d", i);   printf("\n");
    if (day7 >= 0 && day7 <= 4){
        for (i = 29 - day7; i <= 31; i++)                printf("%6d", i);   printf("\n");
    } else {
        for (i = 29 - day7; i <= 29 - day7 + 6; i++)     printf("%6d", i);   printf("\n");
        for (i = 29 - day7 + 7; i <= 31; i++)            printf("%6d", i);   printf("\n");
    }
}

int MONTH8()
{
    printf("\n\t\tAUGUST, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day8; i++)                          printf("      ");
    for (i = 1; i <= 7 - day8; i++)                      printf("%6d", i);   printf("\n");
    for (i = 8 - day8; i <= 14 - day8; i++)              printf("%6d", i);   printf("\n");
    for (i = 15 - day8; i <= 21 - day8; i++)             printf("%6d", i);   printf("\n");
    for (i = 22 - day8; i <= 28 - day8; i++)             printf("%6d", i);   printf("\n");
    if (day8 >= 0 && day8 <= 4){
        for (i = 29 - day8; i <= 31; i++)                printf("%6d", i);   printf("\n");
    } else {
        for (i = 29 - day8; i <= 29 - day8 + 6; i++)     printf("%6d", i);   printf("\n");
        for (i = 29 - day8 + 7; i <= 31; i++)            printf("%6d", i);   printf("\n");
    }
}

int MONTHH12()
{
    int j;
    printf("\n\n\n    ");
    for (i = 1; i <= 40; i++)           printf("A", i);
    for (j = 1; j <= 2; j++){
                                        printf("\n    AA");
        for(i = 1; i <= 36; i++)        printf(" ");    printf("AA");
    }
    printf("\n    AA     PROGRAMMER AL KAZI  AKASH      AA\n    AA      UTTARA UNIVERSITY DHAKA\t  AA");

    for(j = 1; j <= 2; j++) {
                                           printf("\n    AA");
        for (i = 1; i <= 36; i++)          printf(" ");    printf("AA");
    }                                      printf("\n    ");
    for (i = 1; i <= 40; i++)              printf("A",i);
 }

int MONTH9()
{
    printf("\n\t\tSEPTEMBER, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day9; i++)                          printf("      ");
    for (i = 1; i <= 7 - day9; i++)                      printf("%6d", i);   printf("\n");
    for (i = 8 - day9; i <= 14 - day9; i++)              printf("%6d", i);   printf("\n");
    for (i = 15 - day9; i <= 21 - day9; i++)             printf("%6d", i);   printf("\n");
    for (i = 22 - day9; i <= 28 - day9; i++)             printf("%6d", i);   printf("\n");
    if (day9 >= 0 && day9 <= 4){
        for (i = 29 - day9; i <= 30; i++)                printf("%6d", i);   printf("\n");
    } else {
        for (i = 29 - day9; i <= 29 - day9 + 6; i++)     printf("%6d", i);   printf("\n");
        for (i = 29 - day9 + 7; i <= 30; i++)            printf("%6d", i);   printf("\n");
    }
}

int MONTH10()
{

    printf("\n\t\tOCTOBER, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day10; i++)                         printf("      ");
    for (i = 1; i <= 7 - day10; i++)                     printf("%6d", i);   printf("\n");
    for (i = 8 - day10; i <= 14 - day10; i++)            printf("%6d", i);   printf("\n");
    for (i = 15 - day10; i <= 21 - day10; i++)           printf("%6d", i);   printf("\n");
    for (i = 22 - day10; i <= 28 - day10; i++)           printf("%6d", i);   printf("\n");
    if (day10 >= 0 && day10 <= 4){
        for (i = 29 - day10; i <= 31; i++)               printf("%6d", i);   printf("\n");
    } else {
        for (i = 29 - day10; i <= 29 - day10 + 6; i++)   printf("%6d", i);   printf("\n");
        for (i = 29 - day10 + 7; i <= 31; i++)           printf("%6d", i);   printf("\n");
    }
}

int MONTH11()
{
    printf("\n\t\tNOVEMBER, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day11; i++)printf("      ");
    for (i = 1; i <= 7 - day11; i++)                     printf("%6d", i);   printf("\n");
    for (i = 8 - day11; i <= 14 - day11; i++)            printf("%6d", i);   printf("\n");
    for (i = 15 - day11; i <= 21 - day11; i++)           printf("%6d", i);   printf("\n");
    for (i = 22 - day11; i <= 28 - day11; i++)           printf("%6d", i);   printf("\n");
    if (day11 >= 0 && day11 <= 4){
        for (i = 29 - day11; i <= 30; i++)               printf("%6d", i);   printf("\n");
    } else {
        for (i = 29 - day11; i <= 29 - day11 + 6; i++)   printf("%6d", i);   printf("\n");
        for (i = 29 - day11 + 7; i <= 30; i++)           printf("%6d", i);   printf("\n");
    }
}

int MONTH12()
{
    printf("\n\t\tDECEMBER, %d", year1);
    printf("\n\n   sun   mon   tue   wed   thu   fri   sat\n");

    for (i = 1; i <= day12; i++)printf("      ");
    for (i = 1; i <= 7 - day12; i++)                     printf("%6d", i);   printf("\n");
    for (i = 8 - day12; i <= 14 - day12; i++)            printf("%6d", i);   printf("\n");
    for (i = 15 - day12; i <= 21 - day12; i++)           printf("%6d", i);   printf("\n");
    for (i = 22 - day12; i <= 28 - day12; i++)           printf("%6d", i);   printf("\n");
    if (day12 >= 0 && day12 <= 4){
        for (i = 29 - day12; i <= 31; i++)               printf("%6d", i);   printf("\n");
    } else {
        for (i = 29 - day12; i <= 29 - day12 + 6; i++)   printf("%6d", i);   printf("\n");
        for (i = 29 - day12 + 7; i <= 31; i++)           printf("%6d", i);   printf("\n");
    }
}


