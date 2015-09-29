#include<stdio.h>
#include<string.h>
struct emp{
        char name[40]; 
        int age; 
        float bs;
};


struct emp e;

void add();
void display();
void delete();

FILE *fp, *ft; 
char another, choice;
char empname[40];
long int recsize; 


int main(){
 fp = fopen("EMP.DAT","rb+");
 	if(fp == NULL){
        fp = fopen("EMP.DAT","wb+");
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
        printf("4. Exit\n"); 
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
            fclose(fp);  
            
		return 0;        
	}
    }
    return 0;
}
void add()
{
fseek(fp,0,SEEK_END); 

            another = 'y';
            while(another == 'y')  {
                printf("\nEnter name: ");
                scanf("%s",e.name);
                printf("\nEnter age: ");
                scanf("%d", &e.age);
                printf("\nEnter basic salary: ");
                scanf("%f", &e.bs);

                fwrite(&e,recsize,1,fp);
				printf("\nAdd another record(y/n) ");
        		scanf("%c",&another);      
            }
}

void display(){
			rewind(fp); 
            while(fread(&e,recsize,1,fp)==1) 
            {
                printf("\n%s %d %.2f\n",e.name,e.age,e.bs); 
            }
}

void delete(){
another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of employee to delete: ");
                scanf("%s",empname);
                ft = fopen("Temp.dat","wb");  
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
                remove("EMP.DAT"); 
                rename("Temp.dat","EMP.DAT"); 
                fp = fopen("EMP.DAT", "rb+");
                printf("Delete another record(y/n)");
				scanf("%c",&another);
               
            }
}
