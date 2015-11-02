#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>

struct emp{
	int emp_id;
        char name[50]; 
        int age; 
	char address[50];
        float salary;
	int year_of_experience;
	char post[50];
	
};

struct emp e;

void mainmenu();
void add();
int already(int);
void display();
void delete();
void modify();
void search();

