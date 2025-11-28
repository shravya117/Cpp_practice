#include <iostream>
#include <optional>
#include <string>

// Program 15: std::optional demo
std::optional<std::string> findOwner(bool available) {
    if (available) {
        return std::string("Mentor");
    }
    return std::nullopt;
}

int main() {
    std::cout << "Program 15: std::optional demo" << std::endl;
    auto owner = findOwner(false);
    if (owner.has_value()) {
        std::cout << "Owner found: " << owner.value() << std::endl;
    } else {
        std::cout << "No owner assigned" << std::endl;
    }
    return 0;
}
