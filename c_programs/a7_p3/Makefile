/*
CH-230-A
a7_p3.c
Amit Kushwaha
amkushwaha@jacobs-university.de
*/


#generate an executable file
use_linked_list: $(OBJ)
				$(CC) $(CFLAGS) -o use_linked_list $(OBJ)

#generate corresponding obect files
use_linked_list.o: linked_list.h use_linked_list.c 
linked_list.o: linked_list.h linked_list.c

#delete all object files and executable
clean:
	rm -f use_linked_list *.o 
