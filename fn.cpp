#include<iostream>
#include"fn.h"
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

void ask_question_1(vector<question_answers> v, int* a, int* b, int* c, int* d, int* e, int* f, int* g){
  int user_input;
    cout << v[0].question << endl;
    cout << v[0].answer1 << "\n";
    cout << v[0].answer2 << "\n";
    cout << v[0].answer3 << "\n";
    cout << v[0].answer4 << "\n";
    cout << v[0].answer5 << "\n";
    cout << v[0].answer6 << "\n";
    cout << v[0].answer7 << "\n\n";
    cout << "Enter a number 1-7" << "\n";
    cin >> user_input;
    cout << "\n" ;
    switch(user_input){
      case 1:
        a += 1;
        break;
      case 2:
        b += 1;
        break;
      case 3:
        c += 1;
        break;
      case 4:
        d += 1;
        break;
      case 5:
        e += 1;
        break;
      case 6:
        f += 1;
        break;
      case 7:
        g += 1;
        break;
      default:
        cout << user_input << " is not a valid input." << endl;
        break;
      }
}

void ask_question_2(vector<question_answers> v, int* a, int* b, int* c, int* d, int* e, int* f, int* g){
  int user_input;
    cout << v[1].question << "\n";
    cout << v[1].answer1 << "\n";
    cout << v[1].answer2 << "\n";
    cout << v[1].answer3 << "\n";
    cout << v[1].answer4 << "\n";
    cout << v[1].answer5 << "\n";
    cout << v[1].answer6 << "\n";
    cout << v[1].answer7 << "\n\n";
    cout << "Enter a number 1-7" << "\n";
    cin >> user_input;
    cout << "\n" ;
    switch(user_input){
      case 1:
        a += 1;
        break;
      case 2:
        b += 1;
        break;
      case 3:
        c += 1;
        break;
      case 4:
        d += 1;
        break;
      case 5:
        e += 1;
        break;
      case 6:
        f += 1;
        break;
      case 7:
        g += 1;
        break;
      default:
        cout << user_input << " is not a valid input." << endl;
        break;
      }
}

void ask_question_3(vector<question_answers> v, int* a, int* b, int* c, int* d, int* e, int* f, int* g){
  int user_input;
    cout << v[2].question << "\n";
    cout << v[2].answer1 << "\n";
    cout << v[2].answer2 << "\n";
    cout << v[2].answer3 << "\n";
    cout << v[2].answer4 << "\n";
    cout << v[2].answer5 << "\n";
    cout << v[2].answer6 << "\n";
    cout << v[2].answer7 << "\n\n";
    cout << "Enter a number 1-7" << "\n";
    cin >> user_input;
    cout << "\n" ;
    switch(user_input){
      case 1:
        a += 1;
        break;
      case 2:
        b += 1;
        break;
      case 3:
        c += 1;
        break;
      case 4:
        d += 1;
        break;
      case 5:
        e += 1;
        break;
      case 6:
        f += 1;
        break;
      case 7:
        g += 1;
        break;
      default:
        cout << user_input << " is not a valid input." << endl;
        break;
      }
}

void ask_question_4(vector<question_answers> v, int* a, int* b, int* c, int* d, int* e, int* f, int* g){
  int user_input;
    cout << v[3].question << "\n";
    cout << v[3].answer1 << "\n";
    cout << v[3].answer2 << "\n";
    cout << v[3].answer3 << "\n";
    cout << v[3].answer4 << "\n";
    cout << v[3].answer5 << "\n";
    cout << v[3].answer6 << "\n";
    cout << v[3].answer7 << "\n\n";
    cout << "Enter a number 1-7" << "\n";
    cin >> user_input;
    cout << "\n" ;
    switch(user_input){
      case 1:
        a += 1;
        break;
      case 2:
        b += 1;
        break;
      case 3:
        c += 1;
        break;
      case 4:
        d += 1;
        break;
      case 5:
        e += 1;
        break;
      case 6:
        f += 1;
        break;
      case 7:
        g += 1;
        break;
      default:
        cout << user_input << " is not a valid input." << endl;
        break;
      }
}

void ask_question_5(vector<question_answers> v, int* a, int* b, int* c, int* d, int* e, int* f, int* g){
  int user_input;
    cout << v[4].question << "\n";
    cout << v[4].answer1 << "\n";
    cout << v[4].answer2 << "\n";
    cout << v[4].answer3 << "\n";
    cout << v[4].answer4 << "\n";
    cout << v[4].answer5 << "\n";
    cout << v[4].answer6 << "\n";
    cout << v[4].answer7 << "\n\n";
    cout << "Enter a number 1-7" << "\n";
    cin >> user_input;
    cout << "\n" ;
    switch(user_input){
      case 1:
        a += 1;
        break;
      case 2:
        b += 1;
        break;
      case 3:
        c += 1;
        break;
      case 4:
        d += 1;
        break;
      case 5:
        e += 1;
        break;
      case 6:
        f += 1;
        break;
      case 7:
        g += 1;
        break;
      default:
        cout << user_input << " is not a valid input." << endl;
        break;
      }
}

// void return_chakra(int* red_ptr, int* yellow_ptr, int* blue_ptr, int* voilet_ptr, int* orange_ptr, int* green_ptr, int* purple_ptr){
//   string chakra_Def;
//   if ((red_ptr> blue_ptr) && (red_ptr > orange_ptr) && (red_ptr > voilet_ptr) && (red_ptr > yellow_ptr) && (red_ptr > green_ptr) && (red_ptr > purple_ptr))
//     {
//       cout << "View definition of red chakra? (yes or no)" << "\n";
//             cin >> chakra_Def;
//             if (chakra_Def == "yes")
//             redSum();
//     } else if ((blue_ptr > red_ptr) && (blue_ptr > orange_ptr) && (blue_ptr > voilet_ptr) && (blue_ptr > yellow_ptr) && (blue_ptr > green_ptr) && (blue_ptr > purple_ptr))
//           {
//       cout << "View definition of red chakra? (yes or no)" << "\n";
//                         cin >> chakra_Def;
//                         if (chakra_Def == "yes")
//                         blueSum();
//           } else if ((orange_ptr > blue_ptr) && (orange_ptr > red_ptr) && (orange_ptr > voilet_ptr) && (orange_ptr > yellow_ptr) && (orange_ptr > green_ptr) && (orange_ptr > purple_ptr))
//           {
//       cout << "View definition of red chakra? (yes or no)" << "\n";
//                         cin >> chakra_Def;
//                         if (chakra_Def == "yes")
//                         orangeSum();
//           } else if ((voilet_ptr > blue_ptr) && (voilet_ptr > orange_ptr) && (voilet_ptr > red_ptr) && (voilet_ptr > green_ptr) && (voilet_ptr > purple_ptr) && (voilet_ptr > yellow_ptr))
//           {
//       cout << "View definition of red chakra? (yes or no)" << "\n";
//                         cin >> chakra_Def;
//                         if (chakra_Def == "yes")
//                         violetSum();
//           } else if ((yellow_ptr > blue_ptr) && (yellow_ptr > orange_ptr) && (yellow_ptr > voilet_ptr) && (yellow_ptr > red_ptr) && (yellow_ptr > green_ptr) && (yellow_ptr > purple_ptr))
//           {
//       cout << "View definition of red chakra? (yes or no)" << "\n";
//                         cin >> chakra_Def;
//                         if (chakra_Def == "yes")
//                         yellowSum();
//           } else if ((green_ptr > blue_ptr) && (green_ptr > orange_ptr) && (green_ptr > voilet_ptr) && (green_ptr > yellow_ptr) && (green_ptr > red_ptr) && (green_ptr > purple_ptr))
//           {
//       cout << "View definition of red chakra? (yes or no)" << "\n";
//                         cin >> chakra_Def;
//                         if (chakra_Def == "yes")
//                         greenSum();
//           }
//
// }

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
