#include <iostream>
#include <thread>
#include <chrono>

int main(int argc, char ** argv)
{
    using namespace std::chrono;

    if(argc != 2) {
        std::cout << "Usage: " << argv[0] << " ID\n";
        return 1;
    }

    std::cout << "Starting process " << argv[1] << std::endl;

    auto start = high_resolution_clock::now();
    std::this_thread::sleep_for(seconds(2));
    auto end = high_resolution_clock::now();

    duration<double, std::milli> milliseconds = end - start;
    std::cout << "Execution time: " << milliseconds.count() << " ms\n";

    return 0;
}
