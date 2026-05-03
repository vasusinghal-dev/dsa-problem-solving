#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
  cout << "Pattern 1:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern2(int n)
{
  cout << "Pattern 2:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern3(int n)
{
  cout << "Pattern 3:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern4(int n)
{
  cout << "Pattern 4:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << i + 1 << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern5(int n)
{
  cout << "Pattern 5:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern6(int n)
{
  cout << "Pattern 6:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern7(int n)
{
  cout << "Pattern 7:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "  ";
    }

    for (int j = 0; j < (2 * i) + 1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern8(int n)
{
  cout << "Pattern 8:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "  ";
    }

    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern9(int n)
{
  cout << "Pattern 9:" << endl;
  for (int i = 0; i < 2 * n - 1; i++)
  {
    if (i < n)
    {
      for (int j = 0; j < n - i - 1; j++)
      {
        cout << "  ";
      }

      for (int j = 0; j < 2 * i + 1; j++)
      {
        cout << "* ";
      }
    }

    if (i >= n)
    {
      for (int j = 0; j <= i - n; j++)
      {
        cout << "  ";
      }

      for (int j = 0; j < 2 * (2 * n - i - 2) + 1; j++)
      {
        cout << "* ";
      }
    }
    cout << endl;
  }
  cout << endl;
}

void pattern10(int n)
{
  cout << "Pattern 10:" << endl;
  for (int i = 0; i < 2 * n - 1; i++)
  {
    if (i < n)
      for (int j = 0; j <= i; j++)
      {
        cout << "* ";
      }

    if (i >= n)
      for (int j = i - n; j < n - 1; j++)
      {
        cout << "* ";
      }

    cout << endl;
  }
  cout << endl;
}

void pattern11(int n)
{
  cout << "Pattern 11:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << ((j + i + 1) % 2) << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern12(int n)
{
  cout << "Pattern 12:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << j + 1 << " ";
    }

    for (int j = i; j < n - 1; j++)
    {
      cout << "  ";
      cout << "  ";
    }

    for (int j = i; j >= 0; j--)
    {
      cout << j + 1 << " ";
    }

    cout << endl;
  }
  cout << endl;
}

int main()
{
  int n;
  do
  {
    cout << "Enter Number of rows: ";
    cin >> n;

    if (cin.fail() || n <= 0)
    {
      cout << "Invalid input. Enter a positive number.\n";

      cin.clear();
      cin.ignore(10000, '\n');
    }
  } while (n <= 0);
  cout << endl
       << endl;

  /* Pattern 1:
   * * * * *
   * * * * *
   * * * * *
   * * * * *
   * * * * *
   */
  pattern1(n);

  /* Pattern 2:
   *
   * *
   * * *
   * * * *
   * * * * *
   */
  pattern2(n);

  /* Pattern 3:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
  */
  pattern3(n);

  /* Pattern 4:
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
  */
  pattern4(n);

  /* Pattern 5:
   * * * * *
   * * * *
   * * *
   * *
   *
   */
  pattern5(n);

  /* Pattern 6:
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
  */
  pattern6(n);

  /* clang-format off */
  /* Pattern 7:
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
    */
  /* clang-format on */
  pattern7(n);

  /* clang-format off */
    /* Pattern 8:
      * * * * * * * * *
        * * * * * * *
          * * * * *
            * * *
              *
    */
  /* clang-format on */
  pattern8(n);

  /* clang-format off */
  /* Pattern 9:
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *  
  */
  /* clang-format on */
  pattern9(n);

  /* Pattern 10:
   *
   * *
   * * *
   * * * *
   * * * * *
   * * * *
   * * *
   * *
   *
   */
  pattern10(n);

  /* Pattern 11:
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
  */
  pattern11(n);

  /* Pattern 12:
    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1
  */
  pattern12(n);
}
