// Mariia Grushina
// mary23386@csu.fullerton.edu
// @mary23386
// Partners: @AlexanderRivero05, @airnearn

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  double sum = 0;
  bool first = true;
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return -1;
  } else {
    for (std::string& argument : arguments) {
      if (first) {
        first = false;
      } else {
        sum = sum + std::stod(argument);
      }
    }
  }
  double num = static_cast<int>(arguments.size()) - 1;
  double average = sum / num;
  std::cout << "average = " << average << std::endl;
  return 0;
}
