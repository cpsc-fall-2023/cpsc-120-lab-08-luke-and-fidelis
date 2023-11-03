// Fidelis Okorie
// fokorie@csu.fullerton.edu
// @Maxawesome101
// Partners: @lukspencer1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if(arguments.size() == 1){
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  int input_size = arguments.size();
  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum {0};
  bool is_first{true};
  double current_value{0};
for(int counter{0}; counter < input_size; counter++){
  if (is_first){
    is_first = false;
    continue;
  }
current_value = std::stod(arguments.at(counter));
sum += current_value;
std::cout<< sum << "\n";
}
std::cout<< "finished loop \n";
sum = sum/ (input_size - 1);
std::cout<< sum << "\n";
  // TODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.

  // TODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
 std::cout<< "average = " << sum << "\n";
  return 0;
}
