
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

