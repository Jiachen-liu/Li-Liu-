#include <iostream>
#include <algorithm>

using namespace std;

int static F[1010][1010];
int n, p ,t;
int a[1010];
int x = -1000010;

int main()
{
  cin >> n >> p >> t;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int j = 1; j <= t; j++)
    for (int i = 0; i <= n + 1; i++)
      F[j][i] = x;
  for (int i = 1; i <= p; i++)
    F[1][i] = a[i];

  for (int j = 2; j <= t; j++)
  {
    for (int i = 1; i <= n + 1; i++)
    {
      int k = i - 1;
      while (k >= i - p && k >= 0)
      {
        F[j][i] = max(F[j][i], F[j - 1][k]);
        k--;
      }
      F[j][i] += a[i];
    }
  }
  
  for (int j = 1; j <= t; j++)
  {
    for (int i = 0; i <= n + 1; i++)
      cout << F[j][i] << " ";
    cout << endl;
  }
  cout << F[t][n + 1];
}
