#include "slist.h"
int stest_main();

int main() {
	stest_main();

	Student std1("STUDENT1", "LASTNAME1", 100);
	Student std2("STUDENT2", "LASTNAME2", 101);
	Student std3("STUDENT3", "LASTNAME3", 102);
	Student list[] = { std1,std2,std3 };

	Studentlist();
	Studentlist std_list(list, 3);
	std_list.print_all();
	std_list.check(std1);
	
	return 0;
}
