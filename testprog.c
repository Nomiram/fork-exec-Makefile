#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h> 
int main()
{
    pid_t var1;
    printf("hello mai\n");
    var1 = fork();
    if(var1 == 0)//if child
    {
    printf("next gen\n");
	//execl((char*)program,(char*)program,(char*)arg1,(char*)arg2,...,NULL);
    execl("/bin/ps", "/bin/ps", NULL);
    }
    else//if parent
    {
    printf("parent\n");
    }
    printf("hello world\n");/*will not be shown to the child, because execl does not return control to this program*/
    wait(0);
    return 0;
}