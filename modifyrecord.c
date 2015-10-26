#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include "emp.h"

FILE *fp, *ft; 
char another, choice;
char empname[100];
long int recsize; 

void modify(){
            
            another = 'y';
            while(another == 'y')
            {
                printf("Enter the employee name to modify: ");
                scanf("%s", empname);
                rewind(fp);
                while(fread(&e,recsize,1,fp)==1)  
                {
                    if(strcmp(e.name,empname) == 0)  
                    {
                        /*printf("\nEnter new employee id, name, age, address, salary, year of experience, Date of birth and blood group: ");
                        scanf("%d %s %d %s %f %d %d %				    s",e.emp_id,e.name,&e.age,e.address,&e.salary,&e.year_of_experience,&e.DOB,e.blood_group);*/ 

		printf("Enter employee id:\n");
		scanf("%d",&e.emp_id);

                printf("Enter name:\n");
                scanf("%s",e.name);
                
		printf("Enter age:\n");
                scanf("%d", &e.age);

		printf("Enter address:\n");
		scanf("%s",e.address);

                printf("Enter basic salary:\n");
                scanf("%f", &e.salary);

		printf("Enter year of experience:\n");
		scanf("%d",&e.year_of_experience);

		/*printf("Enter Date of birth:\n");
		scanf("%d",&e.DOB);

		printf("Enter Blood Group:\n");
		scanf("%s",e.blood_group);*/			
			
                fwrite(&e,recsize,1,fp); 
                break;
                    }
                }
                printf("You can also perform another operation\n");
                scanf("%c",&another);
            }
            
}
