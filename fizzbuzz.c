#include <stdio.h>

// Fizz-Buzz is a famous interview problem.
// We will do it to learn how to write a text file in C.
//
//
// Print the numbers from 0 to 100 (inclusive) to the file "fizzbuzz.txt" EXCEPT:
//  - If the number is divisible by 3, print "Fizz".
//  - If the number is divisible by 5, print "Buzz".
//  - If the number is divisible by both, print "FizzBuzz".
// Do not output blank lines.
//
int main(void) {
  const int N = 100;
  // Open a file for writing.
  FILE* out = fopen("fizzbuzz.txt", "w");
  // Demonstrate file I/O.
  fprintf(out, "This doesn't work yet!\n");
  int n = 0;
    int fizznumber = 3;
    int buzznumber = 5;
    while (n <= N){
        if (n % fizznumber == 0 && n % buzznumber == 0){
            fputs("FizzBuzz ",out);
            n++;
            continue;
        }
        if (n % fizznumber == 0){
            fputs("Fizz ",out);
        }else if (n % buzznumber == 0){
            fputs("Buzz ",out);
        }else{
            char ch = (char)n;
            fprintf(out,"%d ",ch);
        }
        n++;
    }
    // We need to close the file we're writing to, otherwise we may lose data.
    fclose(out);
    // Tell the shell/terminal that we were successful.
    return 0;
}
