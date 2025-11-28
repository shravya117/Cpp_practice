#include <iostream>
#include <vector>

// Program 31: Backlog total calculator
int main() {
    std::cout << "Program 31: Backlog total calculator" << std::endl;
    std::vector<int> storyPoints = {3, 5, 2, 4};
    int total = 0;
    for (int points : storyPoints) {
        total += points;
    }
    double average = static_cast<double>(total) / storyPoints.size();
    std::cout << "Stories: " << storyPoints.size() << std::endl;
    std::cout << "Total points: " << total << std::endl;
    std::cout << "Average per story: " << average << std::endl;
    return 0;
}
