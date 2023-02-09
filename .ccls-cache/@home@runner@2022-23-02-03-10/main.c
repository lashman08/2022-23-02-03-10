// block Letter Project
#include <stdio.h>
typedef struct BLOCK_LETTER {
  char letter;
  char block[5][4];
} blockletter;
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
blockletter d = {
  'd',
  {
    {'D', 'D', 'D', ' '},
    {'D', ' ', ' ', 'D'},
    {'D', ' ', ' ', 'D'},
    {'D', ' ', ' ', 'D'},
    {'D', 'D', 'D', ' '},
  }
};
blockletter e = {
  'e',
  {
    {'E', 'E', 'E', 'E'},
    {'E', ' ', ' ', ' '},
    {'E', 'E', 'E', ' '},
    {'E', ' ', ' ', ' '},
    {'E', 'E', 'E', 'E'},
  }
};
blockletter f = {
  'f',
  {
    {'F', 'F', 'F', 'F'},
    {'F', ' ', ' ', ' '},
    {'F', 'F', 'F', ' '},
    {'F', ' ', ' ', ' '},
    {'F', ' ', ' ', ' '},
  }
};
blockletter g = {
  'g',
  {
    {' ', 'G', 'G', 'G'},
    {'G', ' ', ' ', ' '},
    {'G', ' ', 'G', 'G'},
    {'G', ' ', ' ', 'G'},
    {' ', 'G', 'G', 'G'},
  }
};
blockletter h = {
  'h',
  {
    {'H', ' ', ' ', 'H'},
    {'H', ' ', ' ', 'H'},
    {'H', 'H', 'H', 'H'},
    {'H', ' ', ' ', 'H'},
    {'H', ' ', ' ', 'H'},
  }
};
blockletter j = {
  'j',
  {
    {'J', 'J', 'J', 'J'},
    {' ', ' ', 'J', ' '},
    {' ', ' ', 'J', ' '},
    {' ', ' ', 'J', ' '},
    {'J', 'J', ' ', ' '},
  }
};
blockletter k = {
  'k',
  {
    {'K', ' ', ' ', 'K'},
    {'K', ' ', 'K', ' '},
    {'K', 'K', ' ', ' '},
    {'K', ' ', 'K', ' '},
    {'K', ' ', ' ', 'K'},
  }
};
blockletter l = {
  'l',
  {
    {'L', ' ', ' ', ' '},
    {'L', ' ', ' ', ' '},
    {'L', ' ', ' ', ' '},
    {'L', ' ', ' ', ' '},
    {'L', 'L', 'L', 'L'},
  }
};
blockletter n = {
  'n',
  {
    {'N', ' ', ' ', 'N'},
    {'N', 'N', ' ', 'N'},
    {'N', ' ', 'N', 'N'},
    {'N', ' ', ' ', 'N'},
    {'N', ' ', ' ', 'N'},
  }
};
blockletter o = {
  'o',
  {
    {' ', 'O', 'O', ' '},
    {'O', ' ', ' ', 'O'},
    {'O', ' ', ' ', 'O'},
    {'O', ' ', ' ', 'O'},
    {' ', 'O', 'O', ' '},
  }
};
blockletter p = {
  'p',
  {
    {'P', 'P', 'P', ' '},
    {'P', ' ', ' ', 'P'},
    {'P', 'P', 'P', ' '},
    {'P', ' ', ' ', ' '},
    {'P', ' ', ' ', ' '},
  }
};
blockletter q = {
  'q',
  {
    {' ', 'Q', 'Q', ' '},
    {'Q', ' ', ' ', 'Q'},
    {'Q', ' ', ' ', 'Q'},
    {'Q', ' ', 'Q', 'Q'},
    {' ', 'Q', 'Q', ' '},
  }
};
blockletter r = {
  'r',
  {
    {'R', 'R', 'R', ' '},
    {'R', ' ', ' ', 'R'},
    {'R', 'R', 'R', ' '},
    {'R', ' ', ' ', 'R'},
    {'R', ' ', ' ', 'R'},
  }
};
blockletter s = {
  's',
  {
    {' ', 'S', 'S', 'S'},
    {'S', ' ', ' ', ' '},
    {' ', 'S', 'S', ' '},
    {' ', ' ', ' ', 'S'},
    {'S', 'S', 'S', ' '},
  }
};
blockletter u = {
  'u',
  {
    {'U', ' ', ' ', 'U'},
    {'U', ' ', ' ', 'U'},
    {'U', ' ', ' ', 'U'},
    {'U', ' ', ' ', 'U'},
    {'U', 'U', 'U', 'U'},
  }
};
blockletter v = {
  'v',
  {
    {'V', ' ', ' ', 'V'},
    {'V', ' ', ' ', 'V'},
    {'V', ' ', ' ', 'V'},
    {'V', ' ', ' ', 'V'},
    {' ', 'V', 'V', ' '},
  }
};
blockletter x = {
  'x',
  {
    {'X', ' ', ' ', 'X'},
    {'X', ' ', ' ', 'X'},
    {' ', 'X', 'X', ' '},
    {'X', ' ', ' ', 'X'},
    {'X', ' ', ' ', 'X'},
  }
};
blockletter z = {
  'z',
  {
    {'Z', 'Z', 'Z', 'Z'},
    {' ', ' ', ' ', 'Z'},
    {' ', ' ', 'Z', ' '},
    {' ', 'Z', ' ', ' '},
    {'Z', 'Z', 'Z', 'Z'},
  }
};
void print_blockletter(blockletter bl);

int main(void) {

  char userletter;
  printf("Yes master? ");
  scanf("%c", &userletter);

  if (userletter == 'a'){
    print_blockletter(a);
  }
  else if (userletter == 'b'){
    print_blockletter(b);
  }
  else if (userletter == 'c'){
    print_blockletter(c);
  }
  else if (userletter == 'd'){
    print_blockletter(d);
  }
  else if (userletter == 'e'){
    print_blockletter(e);
  }
  else if (userletter == 'f'){
    print_blockletter(f);
  }
  else if (userletter == 'g'){
    print_blockletter(g);
  }
  else if (userletter == 'h'){
    print_blockletter(h);
  }
  else if (userletter == 'j'){
    print_blockletter(j);
  }
  else if (userletter == 'k'){
    print_blockletter(k);
  }
  else if (userletter == 'l'){
    print_blockletter(l);
  }
  else if (userletter == 'n'){
    print_blockletter(n);
  }
  else if (userletter == 'o'){
    print_blockletter(o);
  }
  else if (userletter == 'p'){
    print_blockletter(p);
  }
  else if (userletter == 'q'){
    print_blockletter(q);
  }
  else if (userletter == 'r'){
    print_blockletter(r);
  }
  else if (userletter == 's'){
    print_blockletter(s);
  }
  else if (userletter == 'u'){
    print_blockletter(u);
  }
  else if (userletter == 'v'){
    print_blockletter(v);
  }
  else if (userletter == 'x'){
    print_blockletter(x);
  }
  else if (userletter == 'z'){
    print_blockletter(z);
  }     
  else {
    printf("Unknown character\n");
  }
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