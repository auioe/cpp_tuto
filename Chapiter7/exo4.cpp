#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks);
int main()
{
  using namespace std;
  cout << "Your total probability of winning head price is: " << probability(47, 5) * probability(27, 1) << endl;
  cout << "bye\n";
  return 0;
}
// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
  long double result = 1.0; // here come some local variables
  long double n;
  unsigned p;
  for (n = numbers, p = picks; p > 0; n--, p--)
    result = result * n / p ;
  return result;
}
