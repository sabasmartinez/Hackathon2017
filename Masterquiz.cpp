#include<iostream>
#include"Masterquiz.h"
using namespace std;

int main(){
  int Red,Yellow,Blue, Violet, Orange, Green, Purple = 0;
  vector<question_answers> vector_quiz;
  vector_quiz = init_quiz();

  ask_question_1(vector_quiz);
  ask_question_2(vector_quiz);
  ask_question_3(vector_quiz);
  ask_question_4(vector_quiz);
  ask_question_5(vector_quiz);

return 0;
}
