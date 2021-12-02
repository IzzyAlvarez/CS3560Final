#include <iostream>
#include <fstream>
#include <string>

int number_of_lines = 0;
int number_of_chars = 0;

int countLine( std::string pName ){
        return number_of_lines;
}

int countChar(std::string pName){
        return number_of_chars;
}

int main(int argc, char *argv[]) {
	if(argc<1){
		std::cout<<1<<std::endl;
		std::cout<<6<<std::endl;
} 
else{
   
	std::string line;
    //change name of textfile
	std::string fileName;
	fileName=atoi(argv[0]);
    std::ifstream myfile(fileName);

    while (std::getline(myfile, line)){
        ++number_of_lines;
        number_of_chars+=line.length();
    }
    std::cout << "Number of lines in text file: " << countLine(fileName)<<std::endl;
    std::cout<<"Number of characters in text file: "<<countChar(fileName);
}
    return 0;
}
