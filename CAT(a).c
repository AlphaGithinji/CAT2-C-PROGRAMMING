/*
Alpha Githinji
CT102/G/24626/24
*/

#include<stdio.h> 
#include<string.h> 

struct employee{
	char name[25],dept[20],email[50];
	int id;
	float salary;
	
}employee;

int main(){
	strcpy(employee.name,"John Doe");
	strcpy(employee.dept,"Human Resources");
	strcpy(employee.email,"john.doe@company.com");
	employee.id=12345;
	employee.salary=55000.50;
	
	printf("Name:%s\n",employee.name);
	printf("Department:%s\n",employee.dept);
	printf("Email:%s\n",employee.email);
	printf("Id No:%d\n",employee.id);
	printf("Salary:Ksh.%.2f\n",employee.salary);
	
	
	
	return 0;
}
