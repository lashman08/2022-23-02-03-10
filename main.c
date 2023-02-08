// block Letter Project

//Goal - Process a
// Goal 2 - b,c,d,e,f,g,h

#include <stdio.h>

typedef struct BLOCK_LETTER {
  char letter;
  char block[5][4];
} blockletter;

void print_blockletter(blockletter bl);

int main(void) {

    blockletter a = {
      'a',
      {
      {' ', 'A', 'A', ' '},
      {'A', ' ', ' ', 'A'},
      {'A', 'A', 'A', 'A'},
      {'A', ' ', ' ', 'A'},
      {'A', ' ', ' ', 'A'},
    }
 
   };

  blockletter b = {
    'b',
    {
      {'B', 'B', 'B', ' '},
      {'B', ' ', ' ', 'B'},
      {'B', 'B', 'B', ' '},
      {'B', ' ', ' ', 'B'},
      {'B', 'B', 'B', ' '},
    }
  };

  blockletter c = {
    'c',
    {
      {' ', 'C', 'C', ' '},
      {'C', ' ', ' ', 'C'},
      {'C', ' ', ' ', ' '},
      {'C', ' ', ' ', 'C'},
      {' ', 'C', 'C', ' '},
    }
  };

  print_blockletter(a);
  print_blockletter(b);
  print_blockletter(c);
  
  return 0;
}

void print_blockletter(blockletter bl) {
  // loop through each row
  for (int row = 0; row < 5; row++){
    // print each char in the row
    for (int col = 0; col < 4; col++){
      printf("%c", bl.block[row][col]);
    }
    printf("\n");
  }
}