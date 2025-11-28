#include <iostream>
#include <numeric>
#include <vector>

// Program 5: Velocity average
int main() {
    std::cout << "Program 5: Velocity average" << std::endl;
    std::vector<int> velocities = {18, 20, 19, 21, 17};
    auto total = std::accumulate(velocities.begin(), velocities.end(), 0);
    double average = static_cast<double>(total) / velocities.size();
    std::cout << "Total completed points: " << total << std::endl;
    std::cout << "Average velocity: " << average << std::endl;
    return 0;
}
