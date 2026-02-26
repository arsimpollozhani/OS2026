#include<stido.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main (){
	int pid = fork(); // create a child
	if (pid == 0){
		// child code here
	} else {
		// parent code here
	}

}
