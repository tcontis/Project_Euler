#include <iostream>
#include <math.h>
#include <vector>

int largest_prime_factor(long int number)
{
  int prime_factor = 0;
  bool is_prime = false;
  std::vector<int> primes = {2};

  for(int i = 2; i < number + 1; i++)
  {
    is_prime = true;

    //Primality Test: Is number indivisible by other primes?
    for(int prime : primes)
    {
      if(i % prime == 0)
      {
        is_prime = false;
        break;
      }
    }

    //Store prime and try to divide number by prime to later factorize remainder
    if(is_prime)
    {
      primes.push_back(i);
      while(number % i == 0)
      {
        number /= i;
        prime_factor = i;
      }

    }
  }

  return prime_factor;
}

int main()
{
  std::cout << "Largest prime factor of 600851475143: " << largest_prime_factor(600851475143) << std::endl;

  return 0;
}
