all: main.o print_list.o linkedlist.h insert_front.o free_list.o
	gcc main.o print_list.o insert_front.o free_list.o

main.o: main.c
	gcc -c main.c

print_list.o: print_list.c
	gcc -c print_list.c

insert_front.o: insert_front.c
	gcc -c insert_front.c

free_list.o: free_list.c
	gcc -c free_list.c

run:
	./a.out

clean:
	rm *.o
