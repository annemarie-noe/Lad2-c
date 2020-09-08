// Author: Anne Noe amn5741@psu.edu
// Collaborator: Roy Schor rps5863@psu.edu
// Collaborator: Juma Al-Maskari jpa5637@psu.edu
// Collaborator: Emily Hamrick eeh5387@psu.edu
// Section: 3
// Breakout: 10 
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *cmpsc_grade = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(cmpsc_grade);

  if (grade >= 93.0) {
    printf("Your letter grade for CMPSC 131 is A.\n");
  }

  else if (grade >= 90.0) {
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }

  else if (grade >= 87.0) {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }

  else if (grade >= 87.0) {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }

  else if (grade >= 83.0) {
    printf("Your letter grade for CMPSC 131 is B.\n");
  }

  else if (grade >= 80.0) {
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }

  else if (grade >= 77.0) {
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }

  else if (grade >= 70.0) {
    printf("Your letter grade for CMPSC 131 is C.\n");
  }

  else if (grade >= 60.0) {
    printf("Your letter grade for CMPSC 131 is D.\n");
  }

  else if (grade < 60.0) {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
}
