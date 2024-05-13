#include <iostream>

float divisao(float x, float y) {
  return x / y;
}

int main() {
 int x, y;
  std::cout << "Digite o primeiro número: " << std::endl;
    std::cin >> x;
  std::cout << "Digite o segundo número: " << std::endl;
    std::cin >> y;
  std::cout << "A divisão dos números é: " << divisao(x, y) << std::endl;
  return 0;
}