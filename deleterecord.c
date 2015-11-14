
/*****************************************************************************
 *  This file is part of Employee Management System.
 *
 *  This is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with TECHNA.  If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include "emp.h"

FILE *fp, *ft; 
char another, choice;
char empname[100];
long int recsize; 
int emp_id[100];
int flag;
int d, y;
char s[100];

void delete(){
		another='y';
		printf("\n****** User have the choice to delete the records ******\n\n");
		printf("1.Delete by ID:\n");
		printf("2.Delete by Age:\n");
		printf("3.Delete by Salary:\n");
		printf("4.Delete by year of experience:\n");		
		printf("Enter your choice:\n");

                while(another == 'y'){
		scanf("%c",&choice);

		switch(choice){

		case '1' :

		system("clear");
		printf("Enter the employee ID to delete:");
		scanf("%d",&d);
		fp=fopen("emp1.txt","rb+");
		rewind(fp);
		while(fread(&e,sizeof(e),1,fp)==1) {
			if(e.emp_id==d) {
				printf("The employee record is available\n");
				printf("Employee name is %s\n",e.name);
				
				flag=10;
	  	  	}
		}
		if(flag!=10) {
			printf("No record is found modify the search");
			mainmenu();
		}
		if(flag==10) {
			printf("Do you want to delete it?(Y/N) \n press 1 for YES and 2 for NO:");
			scanf("%d",&y);
			if(y==1) {
				ft=fopen("temp.txt","w+"); 
				rewind(fp);
				while(fread(&e,sizeof(e),1,fp)==1) {
					if(e.emp_id!=d){
						fseek(ft,0,SEEK_CUR);
						fwrite(&e,sizeof(e),1,ft); 
		    			}                              
				}
				fclose(ft);
				fclose(fp);
				remove("emp1.txt");
				rename("temp.txt","emp1.txt"); 
				//fp=fopen("library.dat","rb+");   
				if(flag==10) {
					printf("The record is sucessfully deleted\n");
					printf("Delete another record?(Y/N) \n press 1 for YES and 2 for NO\n");	
					scanf("%d",&y);
					if(y==2) 
		        			mainmenu();	
					else 
						delete();
				}
				}
				printf("You can also perform another operation:\n");
				scanf("%c",&another);
				break;
				
				

		case '2' :

		system("clear");
		printf("Enter the employee Age to delete:");
		scanf("%d",&d);
		fp=fopen("emp1.txt","rb+");
		rewind(fp);
		while(fread(&e,sizeof(e),1,fp)==1) {
			if(e.age==d) {
				printf("The employee record is available\n");
				printf("Employee name is %s\n",e.name);
				//printf("Rack No. is    %d\n",a.rackno);
				flag=10;
	  	  	}
		}
		if(flag!=10) {
			printf("No record is found modify the search");
			mainmenu();
		}
		if(flag==10) {
			printf("Do you want to delete it?(Y/N) \n press 1 for YES and 2 for NO:");
			scanf("%d",&y);
			if(y==1) {
				ft=fopen("temp.txt","w+"); 
				rewind(fp);
				while(fread(&e,sizeof(e),1,fp)==1) {
					if(e.age!=d){
						fseek(ft,0,SEEK_CUR);
						fwrite(&e,sizeof(e),1,ft); 
		    			}                              
				}
				fclose(ft);
				fclose(fp);
				remove("emp1.txt");
				rename("temp.txt","emp1.txt"); 
				//fp=fopen("library.dat","rb+");   
				if(flag==10) {
					printf("The record is sucessfully deleted\n");
					printf("Delete another record?(Y/N) \n press 1 for YES and 2 for NO\n");	
					scanf("%d",&y);
					if(y==2) 
		        			mainmenu();	
					else 
						delete();
				}
				}
				printf("You can also perform another operation:\n");
				scanf("%c",&another);
				break; 

		case '3' :

		system("clear");
		printf("Enter the employee Salary to delete:");
		scanf("%d",&d);
		fp=fopen("emp1.txt","rb+");
		rewind(fp);
		while(fread(&e,sizeof(e),1,fp)==1) {
			if(e.salary==d) {
				printf("The employee record is available\n");
				printf("Employee name is %s\n",e.name);
				//printf("Rack No. is    %d\n",a.rackno);
				flag=10;
	  	  	}
		}
		if(flag!=10) {
			printf("No record is found modify the search");
			mainmenu();
		}
		if(flag==10) {
			printf("Do you want to delete it?(Y/N) \n press 1 for YES and 2 for NO:");
			scanf("%d",&y);
			if(y==1) {
				ft=fopen("temp.txt","w+"); 
				rewind(fp);
				while(fread(&e,sizeof(e),1,fp)==1) {
					if(e.salary!=d){
						fseek(ft,0,SEEK_CUR);
						fwrite(&e,sizeof(e),1,ft); 
		    			}                              
				}
				fclose(ft);
				fclose(fp);
				remove("emp1.txt");
				rename("temp.txt","emp1.txt"); 
				//fp=fopen("library.dat","rb+");   
				if(flag==10) {
					printf("The record is sucessfully deleted\n");
					printf("Delete another record?(Y/N) \n press 1 for YES and 2 for NO\n");	
					scanf("%d",&y);
					if(y==2) 
		        			mainmenu();	
					else 
						delete();
				}
				}
				printf("You can also perform another operation:\n");
				scanf("%c",&another);
				break; 
	
	
		case '4' :

		system("clear");
		printf("Enter the employee Year of Experience to delete:");
		scanf("%d",&d);
		fp=fopen("emp1.txt","rb+");
		rewind(fp);
		while(fread(&e,sizeof(e),1,fp)==1) {
			if(e.year_of_experience==d) {
				printf("The employee record is available\n");
				printf("Employee name is %s\n",e.name);
				//printf("Rack No. is    %d\n",a.rackno);
				flag=10;
	  	  	}
		}
		if(flag!=10) {
			printf("No record is found modify the search");
			mainmenu();
		}
		if(flag==10) {
			printf("Do you want to delete it?(Y/N) \n press 1 for YES and 2 for NO:");
			scanf("%d",&y);
			if(y==1) {
				ft=fopen("temp.txt","w+"); 
				rewind(fp);
				while(fread(&e,sizeof(e),1,fp)==1) {
					if(e.year_of_experience!=d){
						fseek(ft,0,SEEK_CUR);
						fwrite(&e,sizeof(e),1,ft); 
		    			}                              
				}
				fclose(ft);
				fclose(fp);
				remove("emp1.txt");
				rename("temp.txt","emp1.txt"); 
				//fp=fopen("library.dat","rb+");   
				if(flag==10) {
					printf("The record is sucessfully deleted\n");
					printf("Delete another record?(Y/N) \n press 1 for YES and 2 for NO\n");	
					scanf("%d",&y);
					if(y==2) 
		        			mainmenu();	
					else 
						delete();
				}
				}
				printf("You can also perform another operation:\n");
				scanf("%c",&another);
				break; 
				}
			
			}
	
		}
		
	}
}
}
}
