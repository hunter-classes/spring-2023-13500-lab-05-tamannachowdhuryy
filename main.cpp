#include <iostream>


#include "funcs.h"


int main(){
// TASK A
  std::cout << "isDivisibleBy (100, 25) == " << isDivisibleBy(100, 25) << "\n";
  std::cout << "isDivisibleBy (25, 0) == " << isDivisibleBy(25, 0) << "\n";

// TASK B
  std::cout << "isPrime (13): " << isPrime(13) << "\n"; 
  std::cout << "isPrime (19): " << isPrime(19) << "\n"; 

// TASK C
  std::cout << "nextPrime (14) == " << nextPrime (14) << "\n";
  std::cout << "nextPrime (17) == " << nextPrime (17) << "\n";

// TASK D
  std::cout << "countPrimes(3, 7): " << countPrimes(3, 7) << "\n";
  std::cout << "countPrimes(11, 29): " << countPrimes(11, 29) << "\n";

// TASK E
  std::cout << "isTwinPrime (13): " << isTwinPrime (13) << "\n";
  std::cout << "isTwinPrime (29): " << isTwinPrime (29) << "\n";

// TASK F
  std::cout << "nextTwinPrime (5): " << nextTwinPrime (5) << "\n";
  std::cout << "nextTwinPrime (29): " << nextTwinPrime (29) << "\n";

// TASK G
  std::cout << "largestTwinPrime(1, 31): " << largestTwinPrime(1, 31) << "\n";
  std::cout << "largestTwinPrime(11, 33): " << largestTwinPrime(11, 33) << "\n";
  return 0;
}
