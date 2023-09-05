#ifndef _MAIN_H
#define _MAIN_H
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
int copy_file(const char *file_from, const char *file_to);
int main(int argc, char *argv[]);
#endif
