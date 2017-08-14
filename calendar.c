// count.c  Count the number of lines and chars in the input.

#include <stdio.h>

int main() {
  // day currently being printed
  int curr = 1;
  // first date (user input)
  int first;
  // terminal date (user input)
  int term;
  // column counter - what col is being printed for current row (1->20)
  int col = 1;

  /*GET USER INPUT*/
  printf("Enter number of days month: ");
  scanf("%d",&term);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d",&first);
  
  /*GET TO FIRST DAY*/
  // if month starts on 1st
  if (first == curr) {
	//% width d
	printf("%3d", curr);
    curr++;
	col++;
  }
  // any other day
  else {
	while (col < first) {
		printf("   ");
		col++;
	}
  }
  
  /*FINISH CALENDAR*/
  // walk through loop printing day
  while (curr <= term) {
	// end of row
	if (col%8 == 0) {
		col = 1;
		printf("\n");
	}
	// print day
	printf("%3d", curr);
	// update current day
	curr++;
	col++;
  }
  printf("\n");
}
