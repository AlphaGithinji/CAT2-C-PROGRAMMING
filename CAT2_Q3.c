/*
Alpha Githinji
CT102/G/24626/24
*/


#include <stdio.h>

int main() {
    float hoursworked, hourlywage, grosspay, tax, netpay;
    float overtimehours = 0;
    
    printf("Enter the number of hours worked in a week: ");
    scanf("%f", &hoursworked);
    
    printf("Enter the hourly wage: ");
    scanf("%f", &hourlywage);
    
    //OVERTIME
    if (hoursworked > 40) {
   
        overtimehours = hoursworked - 40;
        grosspay = (40 * hourlywage) + (overtimehours * hourlywage * 1.5);
    } else {
       
        grosspay = hoursworked * hourlywage;
    }

    //TAXRATE
    if (grosspay <= 600) {
        tax = grosspay * 0.15; 
    } else {
        tax = (600 * 0.15) + ((grosspay - 600) * 0.20);
    }

  
    netpay = grosspay - tax;
  
    printf("Gross Pay: Ksh.%.2f\n", grosspay);
    printf("Taxes: Ksh.%.2f\n", tax);
    printf("Net Pay: Ksh.%.2f\n", netpay);

    return 0;
}
