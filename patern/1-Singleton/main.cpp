#include <iostream>

class OnlyOne {
public:
  static OnlyOne &Instance() {
    static OnlyOne theSingleInstance;
    return theSingleInstance;
  }

private:
  OnlyOne() { std::cout << "Im One, only one" << std::endl; }
  int _datd = 0;
  OnlyOne(const OnlyOne &root) = delete;
  OnlyOne &operator=(const OnlyOne &) = delete;
};

int main() { return 0; }