// C Structures
/*
Name:Galo Mugenda Reagan
Reg no:CT101/G/23572/24
Date:11/6/2024
*/
#include <stdio.h>  //printf(), scanf()
#include <string.h>  // strcpy()

// Define the structure named 'Employee'
struct Employee {
    char name[25];      // Employee's name (string of 25 characters)
    int id;             // Employee ID (integer)
    char department[20]; // Department name (string of 20 characters)
    float salary;       // Employee's salary (float)
    char email[50];     // Employee's email (string of 50 characters)
}employee1;

int main() {

 	strcpy(employee1.name, "John Doe");
	employee1.id = 12345;
	strcpy(employee1.department, "Human Resource");
	employee1.salary = 55000.50;
	strcpy(employee1.email, "john.doe@company.com");
	
    //Print the values of the fields
    
    printf("Name: %s\n", employee1.name);
    printf("ID: %d\n", employee1.id);
    printf("Department: %s\n", employee1.department);
    printf("Salary: %.2f\n", employee1.salary);
    printf("Email: %s\n", employee1.email);

    return 0;
}
