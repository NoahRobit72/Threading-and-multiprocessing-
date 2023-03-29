#include <iostream>
#include <thread>

void printMessage(const char* message) {
    std::cout << message << std::endl;
}

int main() {
    std::thread t1(printMessage, "Hello from thread!");
    t1.join();
    return 0;
}
