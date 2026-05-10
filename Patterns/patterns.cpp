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
    for (int j = 0; j < n - i; j++)
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

void pattern9_even_lines(int n)
{
  cout << "Pattern 9:" << endl;
  for (int i = 1; i <= 2 * n; i++)
  {
    // int space = n - i;
    int stars = 2 * i - 1;
    if (i > n)
    {
      stars = 2 * (2 * n - i + 1) - 1;
      // space = i - n - 1;
    }

    int space = n - stars / 2;

    for (int j = 1; j < space; j++)
    {
      cout << "  ";
    }

    for (int j = 0; j < stars; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }
  cout << endl;
}

void pattern9_odd_lines(int n)
{
  cout << "Pattern 9 using abs():" << endl;
  for (int i = -(n - 1); i <= n - 1; i++)
  {
    int stars = abs(i);

    for (int j = 0; j < stars; j++)
    {
      cout << "  ";
    }

    for (int j = 0; j < 2 * (n - stars) - 1; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }
  cout << endl;
}

void pattern10(int n)
{
  cout << "Pattern 10:" << endl;
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int stars = i;
    if (i > n)
      stars = 2 * n - i;
    for (int j = 0; j < stars; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }
  cout << endl;
}

void pattern10_abs(int n)
{
  cout << "Pattern 10 using abs():" << endl;
  for (int i = -(n - 1); i <= n - 1; i++)
  {
    int stars = abs(i);

    for (int j = 0; j < n - stars; j++)
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

    for (int j = 0; j < 2 * (n - i - 1); j++)
    {
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

void pattern13(int n)
{
  cout << "Pattern 13:" << endl;
  // int counter = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      // Method 1: Auxillary Space Variable:
      // cout << counter << " ";
      // counter++;

      // Method 2: Math Computaton:
      // (n (n + 1))/2 + 1 => 1,2,4,7,11
      cout << ((i * (i + 1)) / 2) + j << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern14(int n)
{
  cout << "Pattern 14:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch <= i + 'A'; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern15(int n)
{
  cout << "Pattern 15:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch < n - i + 'A'; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern16(int n)
{
  cout << "Pattern 16:" << endl;
  for (int i = 0; i < n; i++)
  {
    char ch = i + 'A';
    for (int j = 0; j <= i; j++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern17(int n)
{
  cout << "Pattern 17:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "  ";
    }

    char ch = 'A';
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << ch << " ";
      j >= i ? ch-- : ch++;

      // Method 2:
      // char ch = j > i ? (2 * i - j) + 'A' : j + 'A';
    }
    cout << endl;
  }
  cout << endl;
}

void pattern18(int n)
{
  cout << "Pattern 18:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      char ch = j + (n - i - 1) + 'A';
      cout << ch << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern19_even(int n)
{
  cout << "Pattern 19:" << endl;
  for (int i = 1; i <= 2 * n; i++)
  {
    int stars = i;
    if (i > n)
      stars = 2 * n - i + 1;

    int space = stars - 1;

    for (int j = stars; j <= n; j++)
    {
      cout << "* ";
    }

    for (int j = 0; j < space; j++)
    {
      cout << "  ";
      cout << "  ";
    }

    for (int j = stars; j <= n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern19_even_2(int n)
{
  cout << "Pattern 19 second solution:" << endl;
  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }

    for (int j = 0; j < 2 * i; j++)
    {
      cout << "  ";
    }

    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "* ";
    }

    for (int j = 0; j < 2 * (n - i); j++)
    {
      cout << "  ";
    }

    for (int j = 0; j < i; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }

  cout << endl;
}

void pattern19_odd(int n)
{
  cout << "Pattern 19 using abs():" << endl;
  for (int i = -(n - 1); i <= n - 1; i++)
  {
    int stars = abs(i);

    for (int j = 0; j <= stars; j++)
    {
      cout << "* ";
    }

    for (int j = 1; j < n - stars; j++)
    {
      cout << "  ";
      cout << "  ";
    }

    for (int j = 0; j <= stars; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern20(int n)
{
  cout << "Pattern 20:" << endl;
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int stars = i > n ? 2 * n - i : i;
    int space = n - stars;

    for (int j = 0; j < stars; j++)
    {
      cout << "* ";
    }

    for (int j = 0; j < 2 * space; j++)
    {
      cout << "  ";
    }

    for (int j = 0; j < stars; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }
  cout << endl;
}

void pattern20_abs(int n)
{
  cout << "Pattern 20 using abs():" << endl;
  for (int i = -(n - 1); i <= n - 1; i++)
  {
    int stars = abs(i);

    for (int j = 0; j < n - stars; j++)
    {
      cout << "* ";
    }

    for (int j = 0; j < 2 * stars; j++)
    {
      cout << "  ";
    }

    for (int j = 0; j < n - stars; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }
  cout << endl;
}

void pattern21(int n)
{
  cout << "Pattern 21:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern22_1(int n)
{
  cout << "Pattern 22:" << endl;
  for (int i = 0; i < 2 * n - 1; i++)
  {
    for (int j = 0; j < 2 * n - 1; j++)
    {
      int top = i;
      int bottom = (2 * n - 1) - 1 - j;
      int left = j;
      int right = (2 * n - 1) - 1 - i;

      cout << n - min(min(top, bottom), min(left, right)) << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern22_2(int n)
{
  cout << "Pattern 22:" << endl;
  for (int i = -(n - 1); i <= n - 1; i++)
  {
    for (int j = -(n - 1); j <= n - 1; j++)
    {
      cout << max(abs(i), abs(j)) + 1 << " ";
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

  pattern22_2(n);
}
