#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        std::cout << "Hello from child process!" << std::endl;
        return 0;
    } else if (pid > 0) {
        wait(NULL);
        std::cout << "Hello from parent process!" << std::endl;
        return 0;
    } else {
        std::cerr << "Failed to fork child process!" << std::endl;
        return 1;
    }
}
