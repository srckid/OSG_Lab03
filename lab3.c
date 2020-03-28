#include "Func.h"

void menu() {
    printf("***********************************************\n");
    printf("Please choose from the following options; type the option number and hit the <Enter> key.\n");
    printf("a or A To display the current directory\n");
    printf("b or B To list names of the files in a given directory\n");
    printf("c or C To display whether a file is a simple file or directory\n");
    printf("d or D To show CPU info\n");
    printf("e or E To show disk space usage.\n");
    printf("g or G To Count number of directories in the current directory\n");
    printf("q or Q To exit the program.\n");
    printf("***********************************************\n");
}

int main() {
    char c;
    menu();
    printf("Enter your choice and hit <Enter>: \n");
    int flag = 0;
    while(1) {
        c = getchar();
        while ((getchar()) != '\n');
        fflush(stdin);
        switch(c) {
            case 'a':
            case 'A':{
                current_dir();
                cont();
                break;
            }

            case 'b':
            case 'B': {
              list_file();
							cont();
            	break;
            }

            case 'c':
            case 'C': {
                check_file();
                printf("\n");
                cont();
                break;
            }

            case 'd':
            case 'D':{
                cpu_info();
                cont();
                break;
            }
            case 'e':
            case 'E':{
              disk_usage();
              cont();
              break;
            }
            case 'g':
            case 'G':{
                count_current_dir();
                cont();
                break;
            }
            case 'q':
            case 'Q':
                exit(0);
            default:
                break;
        }
        fflush(stdin);
    }
}
