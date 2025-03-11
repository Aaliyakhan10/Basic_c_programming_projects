#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, j, v, p = 5, i = 0, n[20], f1 = 0, f2 = 0;
  int m[] = {1234567890, 1234512345, 1234565432, 1234509876, 1234554321};

  do
  {
    printf("\n Enter 10 digit epic no. ");

    scanf("%d", &n[i]);

    for (int k = 0; k < p; k++)
    {
      if (n[i] == m[k])
      {
        f2 = 1;
      }
    }
    switch (f2)
    {
    case 1:
      for (int j = 0; j < p; j++)
      {
        if (i == j)
          continue;
        if (n[i] == n[j])
        {
          f1 = 1;
        }
      }
      switch (f1)
      {
      case 0:
        printf("\n ***Select a candidate to vote*** \n");

        printf("S.No\tName Of Party\t\t\tSymbol\n");

        printf("1\tAam Aadmi Party\t\t\tBroom\n");
        printf("2\tBahujan Samaj Party\t\tElephant\n");
        printf("3\tBharatiya Janata Party\t\tLotus\n");
        printf("4\tCommunist Party Of India\tHammer\n");
        printf("5\tIndian National Congress\tHand\n");
        printf("6\tNational People's Party\t\tBook\n");
        printf("7\tNOTA\t\t\t\t\t\t\t\n");

        printf("\nEnter number ");
        scanf("%d", &v);

        switch (v)
        {
        case 1:
          a++;
          break;
        case 2:
          b++;
          break;
        case 3:
          c++;
          break;
        case 4:
          d++;
          break;
        case 5:
          e++;
          break;
        case 6:
          f++;
          break;
        case 7:
          g++;
          break;
        default:
          printf("\n Enter correct candidate number\n");
          i--;
        }
        i++;
        break;
      case 1:
        printf("\n -----Already voted-----\n");
        f1 = 0;
        break;
      }
      f2 = 0;
      break;

    case 0:
      printf("\n Voter not registered / Incorrect Number\n");
      break;
    }
    printf("\n Number of people Voted %d \n", i);
  } while (i < p);
  printf("Enter 1 to view result or 2 to exit: ");
  int ch;
  scanf("%d", &ch);
  switch (ch)
  {
  case 1:

    printf("Enter a password to view result: ");
    int password;
    scanf("%d", &password);
    if (password == 554433)
    {
      printf("\nS.No\tName Of Party\t\t\tSymbol\t\tVotes\n");
      printf("1\tAam Aadmi Party\t\t\tBroom\t\t%d\n", a);
      printf("2\tBahujan Samaj Party\t\tElephant\t%d\n", b);
      printf("3\tBharatiya Janata Party\t\tLotus\t\t%d\n", c);
      printf("4\tCommunist Party Of India\tHammer\t\t%d\n", d);
      printf("5\tIndian National Congress\tHand\t\t%d\n", e);
      printf("6\tNational People's Party\t\tBook\t\t%d\n", f);
      printf("7\tNOTA\t\t\t\t\t\t%d\n", g);
    }
    else
    {
      printf("Wrong password");
    }
    break;
  case 2:
    return 0;
    break;
  }
  /* if (a > b && a > c && a > d && a > e && a > f && a > g)
   {
     printf("AAP is winner \n");
   }
   else if (b > a && b > c && b > d && b > e && b > f && b > g)
   {
     printf("BSP is winner \n");
   }
   else if (c > a && c > b && c > d && c > e && c > f && c > g)
   {
     printf("BJP is winner \n");
   }
   else if (d > a && d > b && d > c && d > e && d > f && d > g)
   {
     printf("CPOI is winner \n");
   }
   else if (e > a && e > b && e > d && c < e && e > f && e > g)
   {
     printf("INC is winner \n");
   }
   else if (f > a && f > b && f > d && f > e && f > c && f > g)
   {
     printf("NPP is winner \n");
   }*/
}
