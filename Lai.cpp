#include<iostream>
#include"Masterquiz.h"
#include<fstream>
#include<sstream>

using namespace std;

vector<question_answers> init_quiz(){
  ifstream quiz;
  quiz.open("quiz.txt");
  vector<question_answers> chicken;
  if(!quiz.is_open()){
    cout << "ERROR: File Not Found!" << endl;
  } else {
    string line;
    string tmp_question;
    string tmp_answer1;
    string tmp_answer2;
    string tmp_answer3;
    string tmp_answer4;
    string tmp_answer5;
    string tmp_answer6;
    string tmp_answer7;
    char stop = ';';
    while(getline(quiz, line)){
      istringstream ss(line);
      getline(ss, tmp_question, stop);
      getline(ss, tmp_answer1, stop);
      getline(ss, tmp_answer2, stop);
      getline(ss, tmp_answer3, stop);
      getline(ss, tmp_answer4, stop);
      getline(ss, tmp_answer5, stop);
      getline(ss, tmp_answer6, stop);
      getline(ss, tmp_answer7);

      question_answers temporary = {tmp_question, tmp_answer1, tmp_answer2, tmp_answer3, tmp_answer4, tmp_answer5, tmp_answer6, tmp_answer7};

      chicken.push_back(temporary);
    }
  }
  quiz.close();
  return chicken;
}

int ask_question_1(vector<question_answers> a){
    cout << a[0].question << endl;
}
int ask_question_2(vector<question_answers> a){
    cout << a[1].question << endl;
}
int ask_question_3(vector<question_answers> a){
    cout << a[2].question << endl;
}
int ask_question_4(vector<question_answers> a){
    cout << a[3].question << endl;
}
int ask_question_5(vector<question_answers> a){
    cout << a[4].question << endl;
}
