#include <iostream>

int main()
{
  int sum = 0;
  int fib_1 = 1;
  int fib_2 = 1;
  int current_fibonnaci = 0;
  for(int i = 1; current_fibonnaci <= 4000000; i++)
  {
      current_fibonnaci = fib_1 + fib_2;
      if(current_fibonnaci % 2 ==0){
          sum += current_fibonnaci;
      }
      fib_1 = fib_2;
      fib_2 = current_fibonnaci;
  }

  std::cout << "Sum of Even-Valued Fibonacci Numbers <= 4,000,000: " << sum << std::endl;
  return 0;
}
