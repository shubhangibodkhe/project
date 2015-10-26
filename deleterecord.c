#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include "emp.h"

FILE *fp, *ft; 
char another, choice;
char empname[100];
long int recsize; 


void delete(){
another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of employee to delete: ");
                scanf("%s",empname);
                ft = fopen("TempF.dat","wb");  
                rewind(fp); 
                while(fread(&e,recsize,1,fp) == 1) 
                {
                    if(strcmp(e.name,empname) != 0)  
                    {
                        fwrite(&e,recsize,1,ft); 
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("EMPF.DAT"); 
                rename("TempF.dat","EMPF.DAT"); 
                fp = fopen("EMPF.DAT", "rb+");
                printf("You can also perform another operation:\n");
		scanf("%c",&another);
              
            }
}
