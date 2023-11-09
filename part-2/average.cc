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
  // 2023-11-08 23:19:21,274 - WARNING -
  // /tmp/cpsc-120-lab-08-luke-and-fidelis/part-2/average.cc:17:20: warning:
  // narrowing conversion from 'std::vector::size_type' (aka 'unsigned long') to
  // signed type 'int' is implementation-defined
  // [bugprone-narrowing-conversions,cppcoreguidelines-narrowing-conversions]
  // original: int input_size = arguments.size();
  int input_size = static_cast<int>(arguments.size());
  double sum{0};
  bool is_first{true};
  double current_value{0};
  // original for (int counter{0}; counter < input_size; counter++) {
  for (const std::string& arg : arguments) {
    if (is_first) {
      is_first = false;
      continue;
    }
    // original current_value = std::stod(arguments.at(counter));
    current_value = std::stod(arg);
    sum += current_value;
  }
  sum = sum / (input_size - 1);
  std::cout << "average = " << sum << "\n";
  return 0;
}
