#include "Func.h"

void cont() {
  char enter = 0; 
  printf("Hit <Enter> to continue\n");
  while (enter != '\r' && enter != '\n') 
    enter = getchar();
  printf("Enter your choice and hit <Enter>: \n");
}

void current_dir() {
  system("pwd");
}

void list_file() {
  char str[256], buff[256];
  printf("Enter a directory path: ");
  scanf("%s",str);
  sprintf(buff, "ls -a %s", str);
  system(buff);
}

void check_file() {
  char str[256], buff[256];
  printf("Enter file name: ");
  scanf("%s",str);
  DIR* dir = opendir(str);
  FILE* file = fopen(str, "r");
  if(dir)
    printf("%s is a directory\n", str);
    else if(file) {
      printf("%s is an ordinary file, with content:\n", str);
      sprintf(buff, "cat %s", str);
      system(buff);
    }
    else
      printf("%s is does not exist, or it is neither an ordinary file not a directory.\n", str);
}

void cpu_info() {
  system("lscpu");
}

void disk_usage() {
  system("df");
}

void count_current_dir() {
 	system("echo Number of directories in current directory: ");
	system("find -maxdepth 1 -type d -printf '%f\n' | wc -l ");
	system("find -maxdepth 1 -type d -printf '%f\n'");
}
