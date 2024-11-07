
#include<stdio.h>
int main(){
float hoursworked,hourlywage,grosspay,tax,netpay;
printf("Enter the hours worked:");
scanf("%f",&hoursworked);
printf("Enter the hourly wage:");
scanf("%f",&hourlywage);
if(hoursworked>40){
float	regularpay=40*hourlywage;
float	overtimepay=(hoursworked-40)*1.5*hourlywage;
	grosspay=regularpay+overtimepay;
}
else {
	grosspay=hoursworked*hourlywage;
}
if(grosspay<=600){
	tax=grosspay*0.15;
}
else{
	tax=(600*0.15)+(grosspay-600)*0.20;
}
netpay=grosspay-tax;
printf("Gross pay: $%.2f \n",grosspay);
printf("Tax: $%.2f \n",tax);
printf("Net pay: $%.2f \n",netpay);

return 0;
}