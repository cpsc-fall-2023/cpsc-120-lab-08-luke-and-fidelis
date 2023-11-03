// Fidelis Okorie
// fokorie@csu.fullerton.edu
// @Maxawesome101
// Partners: @lukspencer1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() == 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  int input_size = arguments.size();
  double sum{0};
  bool is_first{true};
  double current_value{0};
  for (int counter{0}; counter < input_size; counter++) {
    if (is_first) {
      is_first = false;
      continue;
    }
    current_value = std::stod(arguments.at(counter));
    sum += current_value;
  }
  sum = sum / (input_size - 1);
  std::cout << "average = " << sum << "\n";
  return 0;
}
