#include<iostream>
#include"Masterquiz.h"
using namespace std;

int main(){
  int Red,Yellow,Blue, Violet, Orange, Green, Purple = 0;
  int* red_ptr = nullptr;
  red_ptr = &Red;
  int* yellow_ptr = nullptr;
  yellow_ptr = &Yellow;
  int* blue_ptr = nullptr;
  blue_ptr = &Blue;
  int* voilet_ptr = nullptr;
  voilet_ptr = &Violet;
  int* orange_ptr = nullptr;
  orange_ptr = &Orange;
  int* green_ptr = nullptr;
  green_ptr = &Green;
  int* purple_ptr = nullptr;
  purple_ptr = &Purple;

  vector<question_answers> vector_quiz;
  vector_quiz = init_quiz();

  ask_question_1(vector_quiz, red_ptr, yellow_ptr, blue_ptr, voilet_ptr, orange_ptr, green_ptr, purple_ptr);
  ask_question_2(vector_quiz, red_ptr, yellow_ptr, blue_ptr, voilet_ptr, orange_ptr, green_ptr, purple_ptr);
  ask_question_3(vector_quiz, red_ptr, yellow_ptr, blue_ptr, voilet_ptr, orange_ptr, green_ptr, purple_ptr);
  ask_question_4(vector_quiz, red_ptr, yellow_ptr, blue_ptr, voilet_ptr, orange_ptr, green_ptr, purple_ptr);
  ask_question_5(vector_quiz, red_ptr, yellow_ptr, blue_ptr, voilet_ptr, orange_ptr, green_ptr, purple_ptr);

return 0;
}
