#include <iostream>
#include <thread>

void myFunction(int id) {
    std::cout << "Thread " << id << " is running." << std::endl;
}

int main() {
    const int numThreads = 4;
    std::thread threads[numThreads];

    for (int i = 0; i < numThreads; ++i) {
        threads[i] = std::thread(myFunction, i);
    }

    for (int i = 0; i < numThreads; ++i) {
        threads[i].join();
    }

    return 0;
}
