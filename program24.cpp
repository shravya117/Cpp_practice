#include <iostream>

// Program 24: Enum and switch
enum class Status { Todo, InProgress, Done };

void describe(Status status) {
    switch (status) {
        case Status::Todo:
            std::cout << "Status: To do" << std::endl;
            break;
        case Status::InProgress:
            std::cout << "Status: In progress" << std::endl;
            break;
        case Status::Done:
            std::cout << "Status: Done" << std::endl;
            break;
    }
}

int main() {
    std::cout << "Program 24: Enum and switch" << std::endl;
    describe(Status::Todo);
    describe(Status::InProgress);
    describe(Status::Done);
    return 0;
}
