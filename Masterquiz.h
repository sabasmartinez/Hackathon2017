#ifndef MASTERQUIZ_H
#define MASTERQUIZ_H
#include<string>
#include<vector>

using namespace std;


struct question_answers{
 string question;
 string answer1;
 string answer2;
 string answer3;
 string answer4;
 string answer5;
 string answer6;
 string answer7;
};

//inits quiz struct
vector<question_answers> init_quiz();

int ask_question_1(vector<question_answers> a);
int ask_question_2(vector<question_answers> a);
int ask_question_3(vector<question_answers> a);
int ask_question_4(vector<question_answers> a);
int ask_question_5(vector<question_answers> a);

void redSum();
void yellowSum();
void blueSum();
void orangeSum();
void violetSum();
void purpleSum(); 
void greenSum(); 

#endif
