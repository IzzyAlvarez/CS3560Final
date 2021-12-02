#include <iostream>
#include <fstream>
#include <string>

int main() {
    int number_of_lines = 0, c;
    std::string line;
    //change name of textfile
    std::ifstream myfile("hello.txt");

    while (std::getline(myfile, line)){
        ++number_of_lines;
        c+=line.length();
    }
    std::cout << "Number of lines in text file: " << number_of_lines<<std::endl;
    std::cout<<"Number of characters in text file: "<<c;
    return 0;
}
