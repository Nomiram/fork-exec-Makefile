#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h> 
int main()
{
    pid_t var1;
    printf("hello mai\n");
    var1 = fork();
    if(var1 == 0)
    {
    printf("next gen\n");
    execl("/bin/ps", "/bin/ps", NULL);
    }
    else
    {
    printf("parent\n");
    }
    printf("hello world\n");
    wait(0);
    return 0;
}