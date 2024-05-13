#include <iostream>

int soma(int x, int y) {
  return x + y;
}

int main() {
 int x, y;
  std::cout << "Digite o primeiro número: " << std::endl;
    std::cin >> x;
  std::cout << "Digite o segundo número: " << std::endl;
    std::cin >> y;
  std::cout << "A soma dos números é: " << soma(x, y) << std::endl;
  return 0;
}