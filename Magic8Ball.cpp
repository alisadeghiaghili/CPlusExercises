#include <iostream>
#include <cstdlib>

int main() {
  std::cout << "MAGIC 8-BALL:\n";
  srand(time(NULL));
  int answer = std::rand() % 10;

  switch(answer) {
    case 0:
      std::cout << "It is certain.";
      break;
    case 1:
      std::cout << "Very doubtful.";
      break;
    case 2:
      std::cout << "Without a doubt.";
      break;
    case 3:
      std::cout << "Yes - definitely.";
      break;
    case 4:
      std::cout << "You may rely on it.";
      break;
    case 5:
      std::cout << "As I see it, yes.";
      break;
    case 6:
      std::cout << "Most likely.";
      break;
    case 7:
      std::cout << "Outlook good.";
      break;
    case 8:
      std::cout << "Signs point to yes.";
      break;
    case 9:
      std::cout << "Reply hazy, try again.";
      break;
  }
}
