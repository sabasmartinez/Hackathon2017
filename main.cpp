#include<iostream>
#include"fn.h"
using namespace std;

int main(){
  string chakra_Def;
  int Red,Yellow,Blue, Violet, Orange, Green, Purple = 0;
  int* red_ptr = NULL;
  red_ptr = &Red;
  int* yellow_ptr = NULL;
  yellow_ptr = &Yellow;
  int* blue_ptr = NULL;
  blue_ptr = &Blue;
  int* voilet_ptr = NULL;
  voilet_ptr = &Violet;
  int* orange_ptr = NULL;
  orange_ptr = &Orange;
  int* green_ptr = NULL;
  green_ptr = &Green;
  int* purple_ptr = NULL;
  purple_ptr = &Purple;

  vector<question_answers> vector_quiz;
  vector_quiz = init_quiz();

  ask_question_1(vector_quiz, red_ptr, yellow_ptr, blue_ptr, voilet_ptr, orange_ptr, green_ptr, purple_ptr);
  ask_question_2(vector_quiz, red_ptr, yellow_ptr, blue_ptr, voilet_ptr, orange_ptr, green_ptr, purple_ptr);
  ask_question_3(vector_quiz, red_ptr, yellow_ptr, blue_ptr, voilet_ptr, orange_ptr, green_ptr, purple_ptr);
  ask_question_4(vector_quiz, red_ptr, yellow_ptr, blue_ptr, voilet_ptr, orange_ptr, green_ptr, purple_ptr);
  ask_question_5(vector_quiz, red_ptr, yellow_ptr, blue_ptr, voilet_ptr, orange_ptr, green_ptr, purple_ptr);

  // return_chakra(red_ptr, yellow_ptr, blue_ptr, voilet_ptr, orange_ptr, green_ptr, purple_ptr);
  if ((red_ptr> blue_ptr) && (red_ptr > orange_ptr) && (red_ptr > voilet_ptr) && (red_ptr > yellow_ptr) && (red_ptr > green_ptr) && (red_ptr > purple_ptr))
    {
      cout
      cout << "View definition of red chakra? (yes or no)" << "\n";
            cin >> chakra_Def;
            if (chakra_Def == "yes")
            redSum();
    } else if ((blue_ptr > red_ptr) && (blue_ptr > orange_ptr) && (blue_ptr > voilet_ptr) && (blue_ptr > yellow_ptr) && (blue_ptr > green_ptr) && (blue_ptr > purple_ptr))
          {
      cout << "View definition of blue chakra? (yes or no)" << "\n";
                        cin >> chakra_Def;
                        if (chakra_Def == "yes")
                        blueSum();
          } else if ((orange_ptr > blue_ptr) && (orange_ptr > red_ptr) && (orange_ptr > voilet_ptr) && (orange_ptr > yellow_ptr) && (orange_ptr > green_ptr) && (orange_ptr > purple_ptr))
          {
      cout << "View definition of orange chakra? (yes or no)" << "\n";
                        cin >> chakra_Def;
                        if (chakra_Def == "yes")
                        orangeSum();
          } else if ((voilet_ptr > blue_ptr) && (voilet_ptr > orange_ptr) && (voilet_ptr > red_ptr) && (voilet_ptr > green_ptr) && (voilet_ptr > purple_ptr) && (voilet_ptr > yellow_ptr))
          {
      cout << "View definition of violet chakra? (yes or no)" << "\n";
                        cin >> chakra_Def;
                        if (chakra_Def == "yes")
                        violetSum();
          } else if ((yellow_ptr > blue_ptr) && (yellow_ptr > orange_ptr) && (yellow_ptr > voilet_ptr) && (yellow_ptr > red_ptr) && (yellow_ptr > green_ptr) && (yellow_ptr > purple_ptr))
          {
      cout << "View definition of yellow chakra? (yes or no)" << "\n";
                        cin >> chakra_Def;
                        if (chakra_Def == "yes")
                        yellowSum();
          } else if ((green_ptr > blue_ptr) && (green_ptr > orange_ptr) && (green_ptr > voilet_ptr) && (green_ptr > yellow_ptr) && (green_ptr > red_ptr) && (green_ptr > purple_ptr))
          {
      cout << "View definition of green chakra? (yes or no)" << "\n";
                        cin >> chakra_Def;
                        if (chakra_Def == "yes")
                        greenSum();
          }
return 0;
}
