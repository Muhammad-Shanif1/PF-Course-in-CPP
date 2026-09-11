#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <dirent.h>

void scanFilesForWord(const std::string& folderPath, const std::string& targetWord) {
    DIR* dir = opendir(folderPath.c_str());

    if (dir == nullptr) {
        std::cerr << "Error opening directory." << std::endl;
        return;
    }

    dirent* entry;

    while ((entry = readdir(dir)) != nullptr) {
        if (entry->d_type == DT_REG) { // Check if it's a regular file
            std::string filePath = folderPath + "/" + entry->d_name;
            std::ifstream file(filePath);

            if (file.is_open()) {
                std::string line;
                int lineNumber = 1;

                while (getline(file, line)) {
                    size_t found = line.find(targetWord);
                    if (found != std::string::npos) {
                        std::cout << "Found in file: " << entry->d_name << " at line " << lineNumber << std::endl;
                    }
                    lineNumber++;
                }

                file.close();
            }
        }
    }

    closedir(dir);
}

int main() {
    std::string folderPath;
    std::string targetWord;

    std::cout << "Enter the folder path: ";
    std::getline(std::cin, folderPath);

    std::cout << "Enter the target word to search: ";
    std::getline(std::cin, targetWord);

    scanFilesForWord(folderPath, targetWord);

    return 0;
}
