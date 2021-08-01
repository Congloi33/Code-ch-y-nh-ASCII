#include <fstream>
#include <iostream>
#include <string>
#include "windows.h"
int main() {
    std::fstream f;
    f.open("C:/Users/Admin/Pictures/meme/to.txt ");// thay đường dẫn này bằng đường dẫn của bạn
    std::string line;
    while (!f.eof()) {
        getline(f, line);
        std::cout << line << std::endl;
        Sleep(200);// độ nghỉ 
    }
    f.close();
    return 0;
}