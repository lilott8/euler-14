#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

long int check_sequence(long int number, int max);

int main() {

  int seq_len = 0;
  int temp_seq_len = 0;
  long int starting_number = 1000000;
  while(starting_number >= 1){
    //kick of check_sequence with our number and 
    //a seq_len 0; always.
    temp_seq_len = check_sequence(starting_number, 0);
    if(temp_seq_len > seq_len){
      seq_len = temp_seq_len;
      cout << "New length = " << seq_len;
      cout << " By number: " << starting_number << "\n";
    }//if
    starting_number--;
  }//while starting_number

  cout << "Largest Sequence: " << seq_len << "\n";
  return 0;
}//main

long int check_sequence(long int number, int max) {
  if(number == 1){
    return max;
  }//if number== 1
  else{
    if(number%2) {
      max++;
      number = (number * 3) + 1;
      return check_sequence(number, max);
    }//odd
    else {
      max++;
      number = number / 2;
      return check_sequence(number, max);
    }//even
  }//else return check_sequence
}//int check_sequence
