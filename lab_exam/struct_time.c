#include <stdio.h>
void main()

struct Time {
        int hours;
        int minutes;
        int seconds;
    }; 

{
    int hours, minutes, seconds;
    struct Time t1, t2;
    printf("\nEnter time 1:\n");
    printf("Hours:");
    scanf("%d", &t1.hours);
    printf("\nMinutes:");
    scanf("%d", &t1.minutes);
    printf("\nSeconds:");
    scanf("%d", &t1.seconds);

    if(t1.hours > 12 || t1.hours < 1 || t1.minutes > 60 || t1.minutes < 1 || t1.seconds > 60 || t1.seconds < 1)
        printf("\nInvalid Input\n");

    printf("\nEnter time 2:\n");
    printf("Hours:");
    scanf("%d", &t2.hours);
    printf("\nMinutes:");
    scanf("%d", &t2.minutes);
    printf("\nSeconds:");
    scanf("%d", &t2.seconds);

    if(t2.hours > 12 || t2.hours < 1 || t2.minutes > 60 || t2.minutes < 1 || t2.seconds > 60 || t2.seconds < 1)
        printf("\nInvalid Input\n");
    
    hours = t1.hours + t2.hours;
    if(hours > 12)
        hours = hours - 12;

    minutes = t1.minutes + t2.minutes;
    if(minutes>60)
        hours += minutes/60;
        minutes -= 60;

    seconds = t1.seconds + t2.seconds;
    if(seconds>60)
        minutes += seconds/60;
        seconds -= 60;

    printf("\nThe summed time is:\n");
    printf("%d:%d:%d", hours, minutes, seconds);

}