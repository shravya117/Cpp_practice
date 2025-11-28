#include <iostream>
#include <queue>
#include <string>

// Program 44: std::queue pipeline
int main() {
    std::cout << "Program 44: std::queue pipeline" << std::endl;
    std::queue<std::string> pipeline;
    pipeline.push("build");
    pipeline.push("test");
    pipeline.push("release");
    while (!pipeline.empty()) {
        std::cout << "Next: " << pipeline.front() << std::endl;
        pipeline.pop();
    }
    return 0;
}
