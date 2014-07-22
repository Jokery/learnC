#include <stdio.h>
int main()
{
  int number, max_guess, guess, guess_time = 0;
  scanf("%d %d", &number, &max_guess);
  do {
    scanf("%d", &guess);
    guess_time ++;
    if ( guess == number ) {
      if ( guess_time == 1 ) {
        printf("Bingo!\n");
      }
      else if ( guess_time <= 3 ) {
        printf("Lucky You!\n");
      }
      else {
        printf("Good Guess!\n");
      }
      return 0;
    }
    else if ( guess < 0 ) {
    }
    else if ( guess > number ) {
      printf("Too big\n");
    }
    else if ( guess < number ) {
      printf("Too small\n");
    }
  } while ( guess > 0 && guess_time < max_guess );
  printf("Game Over\n");
  return 0;
}
/*
 * 输入样例：
 * 58 4
 * 70
 * 50
 * 56
 * 58
 * 60
 * -2
 *  输出样例：
 *  Too big
 *  Too small
 *  Too small
 *  Good Guess!
 */
