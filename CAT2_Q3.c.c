/*Author:Joseph
Reg No:CT102/G/22241/24
*/

#include <stdio.h>
int main(){
	float hours_worked,hourly_wage,gross_pay,taxes,net_pay,overtime_hours;
	
//Prompt the user to input the hours worked and the hourly wage	
	printf("Enter hours worked in a week:");
	scanf("%f",&hours_worked);
	
	printf("Enter hourly wage:");
	scanf("%f",&hourly_wage);
	
//Calculate the gross pay	
	if(hours_worked>40){
		overtime_hours=hours_worked-40;
		gross_pay=(40*hourly_wage)+(overtime_hours*hourly_wage*1.5);
			printf("Gross pay is $%.2f\n",gross_pay);
	}
	else{
		gross_pay=hours_worked*hourly_wage;
			printf("Gross pay is $%.2f\n",gross_pay);
	}

//Calculate the tax		
	if(gross_pay<=600){
		taxes=gross_pay*0.15;
			printf("Taxes is $%.2f\n",taxes);
	}
	else{
		taxes=(600*0.15)+((gross_pay-600)*0.20);
			printf("Taxes is $%.2f\n",taxes);
	}
	
	//Calculate the net pay
	net_pay=gross_pay-taxes;
	printf("Net pay is $%.2f\n",net_pay);
	
	return 0;
}