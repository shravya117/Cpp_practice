#include <iostream>
#include <utility>
#include <vector>

// Program 23: Class and method
class SprintVelocity {
public:
    explicit SprintVelocity(std::vector<int> history) : history_(std::move(history)) {}

    double average() const {
        int total = 0;
        for (int value : history_) {
            total += value;
        }
        return history_.empty() ? 0.0 : static_cast<double>(total) / history_.size();
    }

private:
    std::vector<int> history_;
};

int main() {
    std::cout << "Program 23: Class and method" << std::endl;
    SprintVelocity velocity({18, 21, 19, 22});
    std::cout << "Average velocity: " << velocity.average() << std::endl;
    return 0;
}
