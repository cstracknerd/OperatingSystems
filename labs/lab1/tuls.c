#include <dirent.h>
#include <stdio.h>
#include <string.h>

/*
tuls prints out contents of specified directory

if no additional parameter for the tuls command just produce
list of files in current directory.

When a directory path is included with the tuls command then the tuls command
prints the list of files in the current directory and recursively prints the
list of files in all directories specified by the directory path argument.

Recursively means in this case means that if the content of a directory inclludes
a directory, print the content of that directory
 */
void recursivedirectory()
{
}
int main()
{
    /*     Your program tuls can be invoked with zero or one argument on the command line; with
    1 argument, print the list of files in the local directory then print the entries in the
    directories in the local directory. Continue to print the list of files in the directories in
    the directories of the local directory */
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s ", dir->d_name);
        }
        closedir(d);
    }

    return (0);
}