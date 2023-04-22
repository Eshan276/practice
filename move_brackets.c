/*You are given a bracket sequence s
 of length n
, where n
 is even (divisible by two). The string s
 consists of n2
 opening brackets '(' and n2
 closing brackets ')'.

In one move, you can choose exactly one bracket and move it to the beginning of the string or to the end of the string (i.e. you choose some index i
, remove the i
-th character of s
 and insert it before or after all remaining characters of s
).

Your task is to find the minimum number of moves required to obtain regular bracket sequence from s
. It can be proved that the answer always exists under the given constraints.

Recall what the regular bracket sequence is:

"()" is regular bracket sequence;
if s
 is regular bracket sequence then "(" + s
 + ")" is regular bracket sequence;
if s
 and t
 are regular bracket sequences then s
 + t
 is regular bracket sequence.
For example, "()()", "(())()", "(())" and "()" are regular bracket sequences, but ")(", "()(" and ")))" are not.

You have to answer t
 independent test cases.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, length, i, j, count = 0, count2 = 0;

  scanf("%d", &n);

  int result[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &length);
    char arr[length + 1];

    scanf("%s", arr);

    count = 0;

    for (j = 0; j < length; j++)
    {
      if (count != 0)
      {
        if (arr[j] == ')')
        {
          count--;
        }
      }
      if (arr[j] == '(')
      {
        count++;
      }
    }
    result[i] = count; // abs(count1 - count2) / 2;
  }

  for (i = 0; i < n; i++)
  {
    printf("%d\n", result[i]);
  }

  return 0;
}
