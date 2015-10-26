#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include "emp.h"


FILE *fp, *ft; 
char another, choice;
char empname[100];
long int recsize; 


int main(){
 fp = fopen("EMPF.DAT","rb+");
 	if(fp == NULL){
        fp = fopen("EMPF.DAT","wb+");
        	if(fp == NULL){
            printf("Cannot open file");
	   return 1;
        }
    }

    
    recsize = sizeof(e);

   
while(1){
        
        printf("1. Add Record\n");  
        printf("2. List Records\n"); 
        printf("3. Delete Records\n");
	printf("4. Modify Records\n"); 
        printf("5. Exit\n"); 
        printf("Your Choice:\n "); 
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
            fclose(fp);  
            
	    return 0;        
	}
    }
    return 0;
}
