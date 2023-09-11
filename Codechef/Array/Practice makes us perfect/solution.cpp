#include <iostream>
using namespace std;

int
main ()
{

  int p[4];

  int counter = 0;

  for (int i = 0; i < 4; i++)
    {
      cin >> p[i];
    }

  for (int i = 0; i < 4; i++)
    {
      if (p[i] >= 10)
	{
	  counter++;
	}
    }

  cout << counter << " ";
  return 0;
}
