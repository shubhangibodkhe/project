#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include "emp.h"

FILE *fp, *ft; 
char another, choice;
char empname[100];
long int recsize; 
int t;
int already(int t);

void add(){
	fp=fopen("emp1.txt","ab+");
	fseek(fp,0,SEEK_END); 
	another = 'y';
        while(another == 'y')  {
		printf("Enter employee id:\n");
		scanf("%d",&t);

		if(already(t) == 0){
		printf("\nThe employee id already exists\n\n");
		mainmenu();
		}
		e.emp_id=t;		

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
	
		printf("Enter Employee post:\n");
                scanf("%s",e.post);

		/*printf("Enter Date of birth:\n");
		scanf("%d",&e.DOB);

		printf("Enter Blood Group:\n");
		scanf("%s",e.blood_group);*/		

                fwrite(&e,recsize,1,fp);
		printf("You can also perform another operation:\n ");
        	scanf("%c",&another);      
            }
}

int already(int t){
	rewind(fp);
	while(fread(&e,sizeof(e),1,fp)==1)
	if(e.emp_id==t){
		return 0;
	}
      return 1; 
}
