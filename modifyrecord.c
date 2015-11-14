
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

void modify(){
            
            another = 'y';
            while(another == 'y')
            {
                printf("Enter the employee name to modify: ");
                scanf("%s", empname);
                rewind(fp);
		fp=fopen("emp1.txt","rb+");
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

		printf("Enter Employee post:\n");
		scanf("%s",e.post);

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
