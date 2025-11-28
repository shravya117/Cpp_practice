#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

// Program 36: String transform
int main() {
    std::cout << "Program 36: String transform" << std::endl;
    std::string note = "code review";
    std::transform(note.begin(), note.end(), note.begin(), [](unsigned char ch) {
        return static_cast<char>(std::toupper(ch));
    });
    std::cout << "Uppercase reminder: " << note << std::endl;
    return 0;
}
