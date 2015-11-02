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
int d, ch, y;
char s[30];

void search() {
	system("clear");
	printf("Search Employee\n");
	printf("1. Search By ID\n");
	printf("2. Search By Name\n");
	printf("Enter Your Choice\n");
	scanf("%d",&ch);
	fp=fopen("emp1.txt","rb+"); 
	rewind(fp);
	switch(ch) {
		case 1:	
	    		system("clear");
			printf("Search Employee By Id\n");
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
		   			flag = 10;
				}
	
	   		}
	    		if(flag != 10) {
	    			printf("No Record Found\n");
			}
	    		printf("Try another search?(Y/N) \n press 1 for YES and 2 for NO");
			scanf("%d", &y);
	    		if(y == 1)
	    			search();
	    		else
	   			 mainmenu();
	    		break;
		
		case 2: 
			system("clear");
			printf("Search Employee data By Name\n");
	    		printf("Enter Employee Name:");
	    		scanf("%s",s);
			fp=fopen("emp1.txt","rb+");			
			int d = 0;
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
		
			//default :
				//search();
		}
		//fclose(fp);
}
