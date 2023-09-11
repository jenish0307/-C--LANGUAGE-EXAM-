#include <stdio.h>

main()
{
    int week;
    printf("ENTER 1 FOR MON\n");
    printf("ENTER 2 FOR TUE\n");
    printf("ENTER 3 FOR WED\n");
    printf("ENTER 4 FOR THU\n");
    printf("ENTER 5 FOR FRI\n");
    printf("ENTER 6 FOR SET\n");
    printf("ENTER 7 FOR SUN\n");
    
    printf("Enter day number:- ");
    scanf("%d", &week);
    
    switch(week)
    {
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        case 7: 
            printf("Sunday");
            break;
        default: 
            printf("Invalid input!");
    }

}