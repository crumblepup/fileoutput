// includes
#include <iostream>
#include <fstream>
#include <string>

// the actual code
int main (){
    std::ifstream file;
    file.open("file");
    std::string line;
        if (file.is_open() ) {
            while ( file ) { 
                std::getline (file, line);
                std::cout << line << '\n';
}
}
else {
    std::cout << "Unable to open file. Have you specified the right path? Is the file open?\n";
}
return 0;
}
