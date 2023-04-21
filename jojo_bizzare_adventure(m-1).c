/*Given a binary string s
 of length n
, consisting of characters 0 and 1. Let's build a square table of size n×n
, consisting of 0 and 1 characters as follows.

In the first row of the table write the original string s
. In the second row of the table write cyclic shift of the string s
 by one to the right. In the third row of the table, write the cyclic shift of line s
 by two to the right. And so on. Thus, the row with number k
 will contain a cyclic shift of string s
 by k
 to the right. The rows are numbered from 0
 to n−1
 top-to-bottom.

In the resulting table we need to find the rectangle consisting only of ones that has the largest area.

We call a rectangle the set of all cells (i,j)
 in the table, such that x1≤i≤x2
 and y1≤j≤y2
 for some integers 0≤x1≤x2<n
 and 0≤y1≤y2<n
.

Recall that the cyclic shift of string s
 by k
 to the right is the string sn−k+1…sns1s2…sn−k
. For example, the cyclic shift of the string "01011" by 0
 to the right is the string itself "01011", its cyclic shift by 3
 to the right is the string "01101".*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char s[300000]; // n is total no of string
  int n;
  int arr[300000], i, k, j, length = 0, count = 0, temp, temp1 = 0, temp2 = 0, first = 0, high = 0, flag = 0, result[300000];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%s", s);
    length = strlen(s); // printf("\n%d,s[0]= %d\n",strlen(s),s[0]);
    for (j = 0; j < length; j++)
    {
      arr[j] = (int)s[j] - 48;
    }
    //-----------------
    if (length == 0)
    {
      result[i] = 0;
    }
    else if (length == 1)
    {
      if (arr[0] == 1)
      {
        result[i] = 1;
      }
      else
      {
        result[i] = 0;
      }
    }
    else
    {
      count = 0;
      temp1 = 0;
      first = 0;
      flag = 0;
      for (j = 0; j < length; j++)
      {
        if (arr[j] == 1)
        {
          count++;
        }
        else
        {
          break;
        }
      }
      if (count != length)
      {
        for (j = length - 1; j >= 0; j--)
        {
          if (arr[j] == 1)
          {
            count++;
          }
          else
          {
            break;
          }
        }
      }
      if (count > 1)
      {
        temp1 = count - 1;
      }
      count = 0;
      for (j = 0; j < length - 1; j++)
      {
        if (arr[j] == 0)
        {
          /* if (flag == 0)
           {
             if (count > 0)
             {
               first = count;
               flag = 1;
             }
             else if (arr[j - 1] == 1)
             {
               first = 1;
               flag = 1;
             }
           }*/
          count = 0;
        }
        else if (arr[j] == 1 && arr[j + 1] == 1)
        {

          count = count + 1;
        }
        if (temp1 <= count)
        {
          temp1 = count;
        }
      }
      // printf("%d", temp1);
      if (temp1 == 0)
      {
        for (j = 0; j < length; j++)
        {
          if (arr[j] == 1)
          {
            flag = 1;
            break;
          }
        }
        if (flag == 1)
        {
          result[i] = 1;
          flag = 0;
        }
        else
        {
          result[i] = 0;
        }
      }
      else if (temp1 == length - 1)
      {
        result[i] = length * length;
      }
      else
      {
        /*if(high<temp1){
          high=temp1;
          temp1=0;
        }*/
        // printf("%d*\n", temp1);
        k = 2;
        high = 0;
        for (j = temp1; j >= 1; j--)
        {

          if (high < j * k)
          {
            high = j * k;
          }

          // printf("%d=%d*%d\n", high, j, k);
          k++;
        }
        result[i] = high;
      }
      temp1 = 0;
      temp2 = 0;
    }
  }
  for (i = 0; i < n; i++)
    printf("%d\n", result[i]);
  return 0;
}
