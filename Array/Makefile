#$(CC) = gcc
#run:	main.o insert_array.o
#	$(CC) main.o insert_array.o -o run
#main.o: main.c
#	$(CC) -c main.c
#insert_array.o: insert_array.c
#	$(CC) -c insert_array.c

#clean:
#	rm *.o
#	rm -rf run
cc=gcc
run:main.o sum_all_array.o max_min_array.o second_largest_number.o number_negative_element.o insert_array.o delete_array.o count_freq.o duplicate_element.o duplicate_delete.o
		$(cc) $^ -o $@
.o:.c
		$(cc) -g $<
clean:
		rm *.o
			rm -f run
