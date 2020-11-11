#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int				main(int argc, char **argv)
{
    int len;
    if(argc == 2) {
        len = strlen(argv[1]);
        char res[len];
        int i = 0;
        int n = 0;
        while(i <= len) {
            res[i] = argv[1][i] - n;
            n++;
            i++;
        }
        printf("%s\n", res);
    }
	return (0);
}
