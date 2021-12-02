#include <iostream>
#include <fstream>
#include <string>

int number_of_lines = 0;
int number_of_chars = 0;

int countLine(){
        return number_of_lines;
}

int countChar(){
        return number_of_chars;
}

int main() {
    std::string line;
    //change name of textfile
    std::ifstream myfile("hello.txt");

    while (std::getline(myfile, line)){
        ++number_of_lines;
        number_of_chars+=line.length();
    }
    std::cout << "Number of lines in text file: " << countLine()<<std::endl;
    std::cout<<"Number of characters in text file: "<<countChar();
    return 0;
}
