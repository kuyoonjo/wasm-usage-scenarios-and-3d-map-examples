#include <chrono>
#include <iostream>

int fibonacci(int n) {
  if(n <= 2) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
  auto start = std::chrono::system_clock::now();
  auto n = fibonacci(40);
  auto end = std::chrono::system_clock::now();
  std::chrono::duration<double> duration = end - start;
  std::cout << n << std::endl;
  std::cout << (int)(duration.count() * 1000) << std::endl;
}