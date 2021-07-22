#include <stdio.h>

// ============== Variables ==================
int start;
int end;
float calc;
int years = 0;

// ========== Functions ======================
int ending_population(void);
int starting_population(void);
int calculate(void);

// ============ COLORS ==============
void green ();
void magenta ();
void cyan ();
void reset ();

// ========= MAIN ==================
int main(void)
{

  // ========= Greet the user ======================
  cyan();
  printf("\nHello! This program will calculate how many years a Lhama population will take to go from the initial size to the final size you will define!");
  reset();

  // =========== Prompt for start size ==============
  starting_population();

  // =========== Prompt for end size ================
  ending_population();

  // =============  Calculate number of years until we reach threshold ===========
  while (calc < (float) end)
  {
    calculate();
  }

  // ========  Print number of years ===============
  if (calc >= (float) end)
  {
    green();
    printf("\nIt will take %i years to achieve the final size you typed", years);
    reset ();
  }
}

//============== Functions ====================

// Function that keep asking the start zize while it´s less than than 9
int starting_population(void)
{

  do
  {
    magenta();
    printf("\nEnter the start size of the population: ");
    reset();
    scanf("\n%i", &start);
  } while (start < 9);
}

// =====================================================================================
// Function that keep asking the ending population while it´s less than the start number
int ending_population(void)
{
  do
  {
    magenta();
    printf("\nEnter the final size of the population: ");
    reset();
    scanf("\n%i", &end);
  } while (end < start);
}

// =========== Function to calculate the number of years =====================================
int calculate(void)
{
  years++;
  calc = start + (start / 3) - (start / 4);
  start = calc;
}

// =========== COLORS ================

void cyan ()
{
  printf("\033[36m");
}

void reset ()
{
  printf("\033[m");
}

void magenta ()
{
  printf("\033[35m");
}

void green ()
{
  printf("\033[32m");
}

