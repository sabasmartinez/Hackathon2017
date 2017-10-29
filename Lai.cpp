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

void ask_question_1(vector<question_answers> a){
    cout << a[0].question << endl;
}
void ask_question_2(vector<question_answers> a){
    cout << a[1].question << endl;
}
void ask_question_3(vector<question_answers> a){
    cout << a[2].question << endl;
}
void ask_question_4(vector<question_answers> a){
    cout << a[3].question << endl;
}
void ask_question_5(vector<question_answers> a){
    cout << a[4].question << endl;
}

void redSum()
		{
		cout << "People with red chakra are good hearted individuals who always help " << "\n" <<
		"someone in need. In no way, shape, or form, they will ever refrain from " << "\n" << 
		"telling you something that can help you out. Red individuals never want " << "\n" << 
		"others to suffer the same way they did, so they feel it is their duty to " << "\n" << 
		"prevent any suffering from occurring." << "\n" <<
		"FAMOUS PEOPLE WITH A RED CHAKRA: George Washington and Oprah Winfrey." << "\n\n";
		}

void yellowSum()
		{
		cout << "Yellows never leave any stone unturned when looking for something. Although yellows as a group may seem to look funny or " << "\n" <<
		"weird, it is their way of not expressing the fear that comes with trying something that no one else has ever done before. " << "\n" << 
		"Yellows are relentless in their search for the truth. One could say a yellow would search for a needle in a haystack, LITERALLY. " << "\n" <<
		"Yellows are the overachievers per say, or the one’s that always go above and beyond for any task." << "\n" <<
		"FAMOUS PEOPLE WITH A YELLOW CHAKRA: Leonardo Da Vinci and Sheldon from The Big Bang Theory." << "\n\n";
		}

void orangeSum()
		{
		cout << "Every single day we learn something new and innovate which causes us to evolve. We all have rights that seem invisible to " << "\n" <<
		"naked eye in this age. For example the right to just explore without judgement and criticism is almost extinct. A concise " << "\n" << 
		"definition of what it means to be orange is to be aware that every single person thinks differently, acts differently, and " << "\n" << 
		"talks differently. All which make human beings so beautiful, so amazing, so special, and so unique. " << "\n" <<
		"FAMOUS PEOPLE WITH AN ORANGE CHAKRA: Mark Twain, Bob Hope, and Conan O'brien" << "\n\n"; 
		}

void violetSum()
		{
		cout << "Violets freely become any of the other colors in the master chakra system in order to do what needs to be done in the world " << "\n" <<
		"around them. They fill in the gaps for everyone and the only master chakra to become another very easily, whenever needed and " << "\n" << 
		"often. Violets put themselves last and others first. Described as extremely nice, empathetic people, the nicest of the nice. " << "\n" << 
		"Come across softly and gently; speak with compassion and kindness. You feel touched by an angel when you walk by a violet." << "\n" << 
		"FAMOUS PEOPLE WITH A VIOLET CHAKRA: Michelle Obama, Mother Teresa, and Robert Herjavec" << "\n\n"; 
		}

void purpleSum()
{
		cout << "Purple love’s you as God loves you: nonjudgmentally, accepting you for who and what you are, most of the time. They love a variety " << "\n" <<
		"of people, valuing uniqueness and the differences found in people.  They manifest emotional freedom, trust, and openness in their " << "\n" << 
		"relationship because they want to work together with people. They are usually there for someone when things are not going well. " << "\n" << 
		"They unconditionally love people for who they really are and bless those who are less fortunate and need their love." << "\n" <<
		"FAMOUS PEOPLE WITH A PURPLE CHAKRA: John Lennon, Angelina Jolie, Johnny Depp" << "\n\n";
		}

void blueSum() 
		{
		cout << "A person with a blue master chakra peers into you and points out the information you have and mixes it with the information they know " << "\n" <<
		"or have. They want to produce wisdom and the application of knowledge. They know their student’s thoughts and add value to them. Blue " << "\n" <<
		"fills in the gaps of other people’s awareness so they experience the relief of having development." << "\n" << 
		"FAMOUS PEOPLE WITH BLUE CHAKRA: Booker T. Washington, Martin Luther King Jr., and Barack Obama" << "\n\n";
		}

void greenSum()
		{
		cout << "Greens are the fixers also known as the “healers”. They bring things back into balance. They find solutions to problems and apply them, " << "\n" <<
		"fixing is in their blood. They love to fix things opposed to others. Green focuses on what needs to be fixed, instead of the people " << "\n" <<
		"who doubt them. They know the solutions to problems and sometimes can’t explain how. Focusing onhow things work is not the same as " << "\n" <<
		"knowing how things work." << "\n" << 
		"FAMOUS PEOPLE WITH GREEN CHAKRA: Martha Stewart and Bob Vila" << "\n\n";
		}
