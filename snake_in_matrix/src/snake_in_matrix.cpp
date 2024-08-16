#include <snake_in_matrix.h>

int Solution::finalPositionOfSnake(int n, std::vector<std::string>& commands) {
  std::unordered_map<std::string, int> commands_map = {
      {"DOWN", 1 * n}, {"UP", -1 * n}, {"LEFT", -1}, {"RIGHT", 1}};
  uint64_t output = 0;
  for (const std::string& command : commands) {
    output += commands_map[command];
  }
  return output;
}
