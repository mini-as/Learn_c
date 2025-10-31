/*
==================================
    Calendar program v 1.00
    copyright (c) 31-10-2025 Maghdouri Mohamed.
    All rights reserved.
	
	compile use GCC on CodeBlocks (IDE )
==================================
*/

#include <stdio.h>


int main ()
{
    int month_s = 5;
    int set_month();

    printf ( "\n=====================\n" );
    printf ( "    Calendar 2025        " );
    printf ( "\n=====================\n\n" );

    for (int i=0 ; i<12 ; i++)
    {

    char months_name [12][5] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int months_end [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf ( " ---[ %s ]----------", months_name [i] );
    month_s = set_month (month_s, months_end [i]); // return month_end used for next month

    printf ( " --------------------\n\n" );

    }

    return 0;
}


int set_month (int month_start,int month)
{
    int day  = 1; // one day
    int week = 7; // days in week
    //int month = 28; // days in month
    int weekend; // is end of week?
    //int month_start = 5; // sa=1 su=2 ...etc
    int month_end = (month-28)+ month_start ;

    if (month_end > 7)
    {
        month_end -= 7;
    }

    --month_start;

    if (month_start < 7 && month_start >= 0) // only from 1 to 7 days
    {

    printf ( "\n sa su mo tu we th fr\n" );

        for (int i=0; i<month_start ; i++)
    {
    printf("   ");
    }


    for ( int i=0 ; i<month  ; i++)
    {

    weekend = (i+month_start) & week; // we need only 7 days in week

    if (weekend == week ) // end of week?
    {
    printf ( "\n" ); // yes
    ++month; // for loop decrement variable (i) when it print new line
    }

    else
    {
    printf (" %2d", day); // no
    ++day;
    }

    }

    printf ( "\n" );

    }

    return month_end;

}








