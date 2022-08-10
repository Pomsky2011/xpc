#include <assembler.h>;
#include <stdio.h>;
#include <string.h>;


int main(int argc, char **argv) {
  char *file_path = argv[1];
  int file_extension = -1;
  FILE *ptr = fopen(file_path, "r");

  // Find the index of the file extension
  int i = 0;
  while ((char c = file_path[i]) != '\0') {
    if (file_path[i] == '.'){
      file_extension = i;
    }
    i++;
  };

  if(file_extension == -1) {
    printf ("Error: inavlid file path or extension. File can't be assembled.");
    exit(1);
  };

  if(strcmp(file_path + file_extension, ".xpa") != 0) {
    printf("Error: the file extension is not xpa. File can't be assembled.");
    exit(2);
  }; else {
    //Assembler code begins here
  };
};
