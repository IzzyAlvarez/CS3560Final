//#include "catch.hpp"
#include <iostream>
#include <fstream>
#include <string>

int number_of_lines = 0;
int number_of_chars = 0;

int countLine( std::string pName ){
        if (number_of_lines>0) return number_of_lines;
	else return 1;
}

int countChar(std::string pName){
        if(number_of_chars>0) return number_of_chars;
	else return pName.length();
}

//TEST_CASE("Number of chars are returned", "[countchar]"){
  //      REQUIRE( countChar("sample.txt") == 39 );
//	REQUIRE( countChar("Athens") == 6);
//	REQUIRE( countChar("Hello World") == 11);
//}

int main(int argc, char *argv[]) {
	if(argc<2){
		std::cout << "Number of lines in text file: " << countLine("Ohio University")<<std::endl;
    std::cout<<"Number of characters in text file: "<<countChar("Athens");
} 
else{
   
	std::string line;
    //change name of textfile
	std::string fileName;
	fileName=argv[1];
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
