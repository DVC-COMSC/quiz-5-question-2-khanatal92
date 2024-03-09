#include    <iostream>
using namespace std;

int main()
{
   int N, M;
   
   cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
   cin >> N >> M;
   
   while (N <= 0 || N >= 10)
   {
      cout << "Invalid input! Please enter a base number between 0 and 10 exclusive: ";
      cin >> N;
   }
  
  while (M < 1 || M > 10)
  {
   cout << "Invalid input! Please enter an exponent between 1 and 10 inclusive: ";
   cin >> M;
  }

  cout << N << " to the power number: ";

  int result = 1;
  for (int i = 0; i <= M; ++i)
  {
   
   cout << result;
   result *= N;

   if (i < M)
  {
   cout << ",";
  }
  }
   return 0;
}
