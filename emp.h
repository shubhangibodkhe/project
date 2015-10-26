#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>

struct emp{
	int emp_id;
        char name[40]; 
        int age; 
	char address[50];
        float salary;
	int year_of_experience;
	//int DOB;
	char blood_group[10];
};

struct emp e;

void add();
void display();
void delete();
void modify();

