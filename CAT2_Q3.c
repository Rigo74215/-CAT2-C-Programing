//program to calculate rate of work and wage
/*
Name:Galo Mugenda Reagan
Reg no:CT101/G/23572/24
Date:11/6/2024
*/
#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables to store input and calculated values
    float hours_worked, hourly_wage, gross_pay, taxes, net_pay;
    float normal_pay, overtime_pay;
    
    // prompt the user to input the hours worked and hourly wage
    printf("Enter the number of hours worked in a week: ");
    scanf("%f", &hours_worked);
    
    printf("Enter your hourly wage: ");
    scanf("%f", &hourly_wage);
    
    // Calculate gross pay
    if (hours_worked <= 40) {
        // If no overtime, just calculate normal pay
        gross_pay = hours_worked * hourly_wage;
    } else {
        // Calculate normal pay for 40 hours
        normal_pay = 40 * hourly_wage;
        
        // Calculate overtime pay 
        overtime_pay = (hours_worked - 40) * hourly_wage * 1.5;//if over 40 hours wages are paid time and a half
        
        // Total gross pay is the sum of normal pay and overtime pay
        gross_pay = normal_pay + overtime_pay;
    }
    
    // Calculation of tax 
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15; // 15% tax if gross_pay is less than or equal to $600
    } else {
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20); // 15% on the first $600, and 20% on the rest
    }
    
    // Calculation of net_pay
    net_pay = gross_pay - taxes; //subtracting taxes fro grosspay
    
    // Output the results
    printf("\nGross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);
    
    return 0;
}
