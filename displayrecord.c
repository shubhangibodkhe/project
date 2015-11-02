#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include "emp.h"

FILE *fp, *ft; 
char another, choice;
char empname[100];
long int recsize; 
int flag;
int d=0, ch, y;
char s[30];
float dd=0.0;
void display(){

	system("clear");
	printf("\n*********** Display Employee Details *************\n\n");
	printf("1. Display By ID\n");
	printf("2. Display By Name\n");
	printf("3. Display by Age\n");
	printf("4. Display by Address\n");
	printf("5. Display by Salary\n");
	printf("6. Display by Year of Experience\n");
	printf("7. Display by Post of Employee\n");
	printf("8. Display all employee details\n");
		
	printf("Enter Your Choice\n");
	scanf("%d",&ch);
	rewind(fp);
	switch(ch) {
		case 1:	
	    		system("clear");
			printf("Display Employee By Id\n");
			printf("Enter the Employee id:");
			scanf("%d",&d);
			fp=fopen("emp1.txt","rb+");
			while(fread(&e,sizeof(e),1,fp)==1) {
				if(e.emp_id==d) {
					printf("\nThe Employee data is available\n");
		    			printf("ID:%d\n",e.emp_id);
		   			printf("Name:%s\n",e.name);
		    			printf("Age:%d\n",e.age);
		  			printf("Address:%s\n",e.address);
		    			printf("Salary:%.2f\n",e.salary);
					printf("Year of Experience:%d\n",e.year_of_experience);
					printf("Employee post:%s\n",e.post);
		   			flag = 10;
				}
	
	   		}
	    		if(flag != 10) {
	    			printf("No Record Found\n");
			}
	    		printf("Try another search?(Y/N) \n press 1 for YES and 2 for NO");
			scanf("%d", &y);
	    		if(y == 1)
	    			display();
	    		else
	   			 mainmenu();
	    		break;
			
			
			case 2: 

			system("clear");
			printf("Display Employee data By Name\n");
	    		printf("Enter Employee Name:");
	    		scanf("%s",s);
			//int d = 0;
			fp=fopen("emp1.txt","rb+");
			while(fread(&e,sizeof(e),1,fp)==1) {
				if(strcmp(e.name,(s))==0) {
					printf("\nThe Employee data is available\n");
		    			//printf("The Employee data is available\n");
		    			printf("ID:%d\n",e.emp_id);
		   			printf("Name:%s\n",e.name);
		    			printf("Age:%d\n",e.age);
		  			printf("Address:%s\n",e.address);
		    			printf("Salary:%.2f\n",e.salary);
					printf("Year of Experience:%d\n",e.year_of_experience);
					printf("Employee post:%s\n",e.post);
		    			d++;
				}
			}
	    		if(d == 0) 
	  		printf("No Record Found\n");

	     		printf("Try another search?(Y/N) \n press 1 for YES and 2 for NO");
			scanf("%d",&y);
	   		if(y == 1)
	    			search();
	    		else
	    			mainmenu();
	   		break;

			case 3:
	
	    		system("clear");
			printf("Display Employee By Age\n");
			printf("Enter the Employee Age:");
			scanf("%d",&d);
			fp=fopen("emp1.txt","rb+");
			while(fread(&e,sizeof(e),1,fp)==1) {
				if(e.age==d) {
					printf("\nThe Employee data is available\n");
		    			printf("ID:%d\n",e.emp_id);
		   			printf("Name:%s\n",e.name);
		    			printf("Age:%d\n",e.age);
		  			printf("Address:%s\n",e.address);
		    			printf("Salary:%.2f\n",e.salary);
					printf("Year of Experience:%d\n",e.year_of_experience);
					printf("Employee post:%s\n",e.post);
		   			flag = 10;
				}
	
	   		}
	    		if(flag != 10) {
	    			printf("No Record Found\n");
			}
	    		printf("Try another search?(Y/N) \n press 1 for YES and 2 for NO");
			scanf("%d", &y);
	    		if(y == 1)
	    			display();
	    		else
	   			 mainmenu();
	    		break;	

			case 4: 

			system("clear");
			printf("Display Employee data By Address\n");
	    		printf("Enter Employee Address:");
	    		scanf("%s",s);
			fp=fopen("emp1.txt","rb+");
			//int d = 0;
			while(fread(&e,sizeof(e),1,fp)==1) {
				if(strcmp(e.address,(s))==0) {
					printf("\nThe Employee data is available\n");
		    			//printf("The Employee data is available\n");
		    			printf("ID:%d\n",e.emp_id);
		   			printf("Name:%s\n",e.name);
		    			printf("Age:%d\n",e.age);
		  			printf("Address:%s\n",e.address);
		    			printf("Salary:%.2f\n",e.salary);
					printf("Year of Experience:%d\n",e.year_of_experience);
					printf("Employee post:%s\n",e.post);
		    			d++;
				}
			}
	    		if(d == 0) 
	  		printf("No Record Found\n");

	     		printf("Try another search?(Y/N) \n press 1 for YES and 2 for NO");
			scanf("%d",&y);
	   		if(y == 1)
	    			search();
	    		else
	    			mainmenu();
	   		break;	

			case 5:
	
	    		system("clear");
			printf("Display Employee By Salary\n");
			printf("Enter the Employee Salary:");
			scanf("%f",&dd);
			fp=fopen("emp1.txt","rb+");
			while(fread(&e,sizeof(e),1,fp)==1) {
				if(e.salary==dd) {
					printf("\nThe Employee data is available\n");
		    			printf("ID:%d\n",e.emp_id);
		   			printf("Name:%s\n",e.name);
		    			printf("Age:%d\n",e.age);
		  			printf("Address:%s\n",e.address);
		    			printf("Salary:%.2f\n",e.salary);
					printf("Year of Experience:%d\n",e.year_of_experience);
		   			printf("Employee post:%s\n",e.post);
					flag = 10;
				}
	
	   		}
	    		if(flag != 10) {
	    			printf("No Record Found\n");
			}
	    		printf("Try another search?(Y/N) \n press 1 for YES and 2 for NO");
			scanf("%d", &y);
	    		if(y == 1)
	    			display();
	    		else
	   			 mainmenu();
	    		break;	

			case 6:
	
	    		system("clear");
			printf("Display Employee By Year of experience\n");
			printf("Enter the Experience years of Employee:");
			scanf("%d",&d);
			fp=fopen("emp1.txt","rb+");
			while(fread(&e,sizeof(e),1,fp)==1) {
				if(e.year_of_experience==d) {
					printf("\nThe Employee data is available\n");
		    			printf("ID:%d\n",e.emp_id);
		   			printf("Name:%s\n",e.name);
		    			printf("Age:%d\n",e.age);
		  			printf("Address:%s\n",e.address);
		    			printf("Salary:%.2f\n",e.salary);
					printf("Year of Experience:%d\n",e.year_of_experience);
													
		   			flag = 10;
				}
	
	   		}
	    		if(flag != 10) {
	    			printf("No Record Found\n");
			}
	    		printf("Try another search?(Y/N) \n press 1 for YES and 2 for NO");
			scanf("%d", &y);
	    		if(y == 1)
	    			display();
	    		else
	   			 mainmenu();
	    		break;	

			case 7: 

			system("clear");
			printf("Display Employee data By Post\n");
	    		printf("Enter Employee post:");
	    		scanf("%s",s);
			fp=fopen("emp1.txt","rb+");
			//int d = 0;
			while(fread(&e,sizeof(e),1,fp)==1) {
				if(strcmp(e.post,(s))==0) {
					printf("\nThe Employee data is available\n");
		    			//printf("The Employee data is available\n");
		    			printf("ID:%d\n",e.emp_id);
		   			printf("Name:%s\n",e.name);
		    			printf("Age:%d\n",e.age);
		  			printf("Address:%s\n",e.address);
		    			printf("Salary:%.2f\n",e.salary);
					printf("Year of Experience:%d\n",e.year_of_experience);
					printf("Employee post:%s\n",e.post);		    			
					d++;
				}
			}
	    		if(d == 0) 
	  		printf("No Record Found\n");

	     		printf("Try another search?(Y/N) \n press 1 for YES and 2 for NO");
			scanf("%d",&y);
	   		if(y == 1)
	    			search();
	    		else
	    			mainmenu();
	   		break;
			
			/*case 8:
			system("clear");
			rewind(fp); 	
			fp=fopen("emp1.txt","rb+");
	            	while(fread(&e,recsize,1,fp)==1){			
			printf("\n************Employee All Information:************\n");
			
			printf("Employee id:%d\n",e.emp_id);
		
                	printf("Employee name:%s\n",e.name);
                
			printf("Employee age:%d\n",e.age);

			printf("Employee address:%s\n",e.address);
	
        	        printf("Employee basic salary:%.2f\n",e.salary);

			printf("Employee year of experience:%d\n",e.year_of_experience);

			printf("Employee post:%s\n",e.post);
			}			
			break;*/

			}

	    
}
