#include <iostream>
#include <string>
#include <fstream>

void readFile(std::string filename);

int main()
{
  std::string filename = "testfile.txt";
  readFile(filename);
  return 0;
}

void readFile(std::string filename) {
  std::ifstream input;
  input.open(filename);

  if (!input.is_open()) {
      std::cerr << "Couldnt open " << filename << std::endl;
  }

  std::string line;
  while(std::getline(input, line)) {
      std::cout << line << std::endl;
  }
}
