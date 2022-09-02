/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char *reading_file(char const *filepath)
{
    char *buffer;
    int fd = open(filepath, O_RDONLY);
    int size = 0;
    struct stat s;

    if (fd == -1)
        return "?";
    stat(filepath, &s);
    size = s.st_size;
    buffer = malloc(sizeof(char*) * (size + 1));
    if (buffer == NULL)
        return "?";
    if (read(fd, buffer, size) == -1)
        return "?";
    buffer[size] = '\0';
    return buffer;
}
