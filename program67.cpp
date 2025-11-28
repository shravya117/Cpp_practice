#include <iostream>
#include <string>
#include <vector>

// Program 67: Struct overview
struct Task {
    std::string title;
    int estimate;
};

int main() {
    std::cout << "Program 67: Struct overview" << std::endl;
    std::vector<Task> tasks = {
        {"Wireframes", 3},
        {"Prototype", 5},
        {"Feedback", 2}
    };
    for (const auto& task : tasks) {
        std::cout << task.title << " -> " << task.estimate << " pts" << std::endl;
    }
    return 0;
}
