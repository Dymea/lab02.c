// Author: Dymea Schippers dxs5940@psu.edu
// Collaborator: August Sanderson aes6218@psu.edu
// Collaborator: Johnathan Ahn jxa5570@psu.edu
// Collaborator: Ronit Ramnarayan rvr5507@psu.edu
// Collaborator: Nicholas Glaz nsg5204@psu.edu
// Section: 11
// Breakout: 2

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *grade = readline("Enter your CMPSC 131 grade: ");
  double letter = atof(grade);

  //Determining letter grade
    if (letter >= 93.0) 
  {
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (letter >= 90.0 && letter < 93.0) 
  {
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (letter >= 87.0 && letter < 90.0)
  {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (letter >= 83.0 && letter < 87.0)
  {
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (letter >= 80 && letter < 83)
  {
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if (letter >= 77.0 && letter < 80.0)
  {
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if (letter >= 70.0 && letter < 77.0)
  {
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if (letter >= 60.0 && letter < 70.0)
  {
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else if (letter < 60.0)
  {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }

  return 0;
}