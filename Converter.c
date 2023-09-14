#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {
    char unit; 
    double temp; 

    printf("\nEnter the unit, C or F: "); 
    scanf("%c", &unit); 

    unit = toupper(unit); //Now it is recongnised by the switch statement.

    switch (unit){
        case 'C': 
            printf("\nEnter the tempature in Celsius: ");
            scanf("%lf", &temp); 
            temp = (temp * 9 / 5) + 32; //Forumla
            printf("\n The tempature in Fahrenheit is: %lf", temp); 
        break;

        case 'F': 
            printf("\n Enter the temp in Fahrenheit: ");
            scanf("%lf", &temp); 
            temp = (temp - 32) * 5 / 9; //Formula
            printf("The tempature in Fahrenheit is: %lf", temp); 
        break;

        default: 
            printf("That is not a recognised unit..."); //If the user did not enter C or F
        break;
    }
    return 0; //Exit successfully
}
