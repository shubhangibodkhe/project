#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include "emp.h"


FILE *fp, *ft; 
char another, choice;
char empname[100];
long int recsize; 
//void mainmenu();

void mainmenu(){
	
	while(1){
	system("clear");
	printf("1. Add Record\n");  
        printf("2. List Records\n"); 
        printf("3. Delete Records\n");
	printf("4. Modify Records\n"); 
	printf("5. Search Records\n");
        printf("6. Exit\n"); 
        printf("Enter Your Choice:\n "); 
	scanf("%c",&choice);
        
        switch(choice){
        case '1': 
          	add();
                break;
 
       case '2':
           	display();
            	break;

        case '3':
            	delete();
            	break;
	
	case '4':
		modify();
		break;

	case '5':
		search();
		break;

        case '6':
		system("clear");
		exit(0);
		fclose(fp);  
		break;   
		     
	}
    }
}

int main(){
 fp = fopen("emp1.txt","rb+");
 	if(fp == NULL){
        fp = fopen("emp1.txt","wb+");
        	if(fp == NULL){
            printf("Cannot open file");
	   return 1;
        }
    }

	recsize = sizeof(e);
	mainmenu();
	return 0;
}

