/* Program to Calculate an AIR Ticket after Discount(Based on Nasted IF Else) */
#include<stdio.h>
int main()
{
    int age;
    float fare;
    char gender;
    puts("***************************************************************************************");
    puts("\n Discount Rules:");
    puts("1. If Passanger is below or equal 14 years then 30% discount on fare.");
    puts("2. If Passanger is female & below/equal 14 years, Extra 10% discount on fare. ");
    puts("3. If passanger id male then there is no Extra Dicount on fare. ");
    puts("4. If Passanger is avobe 14 years(Male or Female) then 20% discount on fare. ");
    puts("***************************************************************************************");

printf("\n Enter the Age of Passanger: ");
scanf("%d", &age);
printf("\n Enter your Gender (m/f): ");
scanf(" %c", &gender);
printf("\n Enter the Air Ticket Fare Rate in TK: ");
scanf("%f", &fare);
    if(age<=14)
{
        printf("\n Press 'Enter' to get the Discount\n ");
        getch();
    if(gender=='f')
        {
            fare = fare-fare*0.4;  //30%+10% Disconut
            puts("\n You are eligible to get 30% +10% Extra Discount");
            printf("\n Air Ticket fare after discount is TK: %2f\n", fare);
        }
    if(gender=='m')
        {
            fare = fare-fare*0.3; //no Discount
            puts("\n You are eligible to get 30% Discount ");
            printf("\n Air Ticket fare after discount is TK: %2f\n");
        }   
    if(age>14)
        {
            fare = fare-fare*0.20; //Only 20% discount
            printf("\n Air Ticket fare after discount is TK: %2f\n");
        } 
}
printf("\n\n\nThank You For choosing our Air Lines ^_^");
} 