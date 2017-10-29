#include<iostream>
#include"Masterquiz.h"
#include<fstream>
#include<sstream>

using namespace std;

vector<question_answers> init_quiz(){
  ifstream quiz;
  quiz.open("quiz.csv");
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
    cout << a[0].answer1 << endl;
    cout << a[0].answer2 << endl;
    cout << a[0].answer3 << endl;
    cout << a[0].answer4 << endl;
    cout << a[0].answer5 << endl;
    cout << a[0].answer6 << endl;
    cout << a[0].answer7 << endl;
}
int ask_question_2(vector<question_answers> a){
    cout << a[1].question << endl;
    cout << a[1].answer1 << endl;
    cout << a[1].answer2 << endl;
    cout << a[1].answer3 << endl;
    cout << a[1].answer4 << endl;
    cout << a[1].answer5 << endl;
    cout << a[1].answer6 << endl;
    cout << a[1].answer7 << endl;
}
int ask_question_3(vector<question_answers> a){
    cout << a[2].question << endl;
    cout << a[2].answer1 << endl;
    cout << a[2].answer2 << endl;
    cout << a[2].answer3 << endl;
    cout << a[2].answer4 << endl;
    cout << a[2].answer5 << endl;
    cout << a[2].answer6 << endl;
    cout << a[2].answer7 << endl;
}
int ask_question_4(vector<question_answers> a){
    cout << a[3].question << endl;
    cout << a[3].answer1 << endl;
    cout << a[3].answer2 << endl;
    cout << a[3].answer3 << endl;
    cout << a[3].answer4 << endl;
    cout << a[3].answer5 << endl;
    cout << a[3].answer6 << endl;
    cout << a[3].answer7 << endl;
}
int ask_question_5(vector<question_answers> a){
    cout << a[4].question << endl;
    cout << a[4].answer1 << endl;
    cout << a[4].answer2 << endl;
    cout << a[4].answer3 << endl;
    cout << a[4].answer4 << endl;
    cout << a[4].answer5 << endl;
    cout << a[4].answer6 << endl;
    cout << a[4].answer7 << endl;
}
