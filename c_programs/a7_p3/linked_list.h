/* 
   CH-230-A
   a7_p1.c
   Amit Kushwaha
   amkushwaha@jacobs-university.de
*/

struct list;
struct list* push_front(struct list* my_list, int value);
struct list* push_back(struct list* my_list, int value);
struct list* remove_first(struct list *my_list);
void print_list(struct list* my_list);
void dispose_list(struct list* my_list);
