#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include "emp.h"

FILE *fp, *ft; 
char another, choice;
char empname[100];
long int recsize; 


void display(){
	    rewind(fp); 
            while(fread(&e,recsize,1,fp)==1) 
            {
                //printf("\nEmployee All Information:%d %s %d %s %.2f %d \n",e.emp_id,e.name,e.age,e.address,e.salary,e.year_of_experience); 
            	printf("\n************Employee All Information:************\n");
		printf("Employee id:%d\n",e.emp_id);
		
                printf("Employee name:%s\n",e.name);
                
		printf("Employee age:%d\n",e.age);

		printf("Employee address:%s\n",e.address);

                printf("Employee basic salary:%.2f\n",e.salary);

		printf("Employee year of experience:%d\n",e.year_of_experience);

		//printf("Employee Date of birth:%d\n",e.DOB);

		//printf("Employee Blood Group:%s\n",e.blood_group);		
		}
}

