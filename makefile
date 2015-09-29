try: project.o
	cc project.o -o project
main.o: project.c
	cc -Wall -c project.c