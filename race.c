#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <memory.h>

int main(int argc, char * argv[]) {
//    if (argc != 3) {
//        printf("arg error.\n");
//        return -1;
//    }
    int pid2;
    int pid1 = fork();
    if (pid1 == 0) {
        char ch[100];
        strcpy(ch, "./");
        strcat(ch, argv[1]);
        int i = execlp(ch, ch, NULL);
        printf("%d\n", i);
    } else if ((pid2 = fork()) == 0) {
        char ch[100];
        strcpy(ch, "./");
        strcat(ch, argv[2]);
        int i = execlp(ch, ch, NULL);
        printf("%d\n", i);
    }

    int status;
    int i = wait(&status);
    kill(pid1, SIGKILL);
    kill(pid2, SIGKILL);

    if (i == pid1) {
        if (WEXITSTATUS(status) != 0) {
            printf("%s failed, so %s wins by default.\n", argv[1], argv[2]);
        } else {
            printf("%s win\n", argv[1]);
        }
    } else {
        if (WEXITSTATUS(status) != 0) {
            printf("%s failed, so %s wins by default.\n", argv[2], argv[1]);
        } else {
            printf("%s win\n", argv[2]);
        }
    }
    return 0;
}