#ifndef _MAIN_H
#define _MAIN_H
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
