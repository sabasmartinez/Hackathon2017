#include<iostream>
using namespace std;

int main()
{
int Red, Yellow, Blue, Violet, Orange, Green, Purple = 0;
int userChoice;
cout << "Choose how you react when you're having a really bad day" <<"\n" << endl;
cout << "(1)You think you're not good enough. Because of this, everything sucks" << endl;
cout << "(2)You use people to get what you want" << endl;
cout << "(3)You're angry- and resentful. People don't get how their actions have consequences" << endl;
cout << "(4)While normally you take responsibility, today you'd rather do nothing" << endl;
cout << "(5)You're self-centered; no one is good enough for you" << endl;
cout << "(6)You blame other people-everything is their fault" << endl;
cout << "(7)You disconnect from people around you and hole up in your room" << endl;
cin >> userChoice;
switch(userChoice)
{
  case 1: 
    Violet ++;
     break;
  case 2:
    Green ++;
     break;
  case 3:
    Blue ++;
      break;
  case 4: 
    Red ++;
    break;
  case 5: 
    Purple ++;
     break;
  case 6:
    Orange ++;
     break;
  case 7: 
    Yellow ++;
     break;
  default:
     break;
}
cout << "Choose something you are passionate about.." << "\n" << endl;
cout << "(1)Finding something fun to do immediately or right before something gets boring. You can make anything fun, and... you will find a way." << endl;
cout << "(2)Reading,writing, and gathering wisdom. Being a daily intellectual. Finding balance/Caring about people, social consciousness, the physical pastime of your choice... telling people what you think they should know." << endl;
cout << "(3)Being peace. Finding the best solution to a problem, then using it. Curing people. Releasing their pain. Fixing their broken stuff." << endl;
cout << "(4)Putting the pieces together, and you can spend hours doing it. In fact, you spend more time doing your research than most. You're all about placing your goal ahead of you and striving to reach it." << endl;
cout << "(5)Either expressing yourself through art or science. Life is about love, acting when the emotions are right, and beauty. Life is about making things. It's about being in relationship with others so the love shines through." << endl;
cout << "(6)Having a lot of courage and faith. After all, it's relatively easy for you to believe in the unseen and see it happening even before there is any evidence that it will. You're powerful in your beliefs about the future." << endl;
cout << "(7)Doing any of the things you just read about so that you can help people." << endl; 

cin >> userChoice;
switch(userChoice)
{
  case 1:
     Orange ++;
     break;
  case 2:
     Blue ++;
     break;
  case 3: 
     Green ++;
     break;
  case 4:
     Yellow ++;
     break;
  case 5:
     Purple ++;
     break;
  case 6: 
     Red ++;
     break;
  case 7:
     Violet ++;
     break;
  default:
     break;
}
cout << "(1)In the presence of others, you're good at..." << endl;
cout << "(2)Showing someone what went wrong and showing how to make it right" << endl; 
cout << "(3)Giving other people advice. They even ask for it." << endl;
cout << "(4)Putting another person first and clearing your schedule to help them." << endl;
cout << "(5)Telling the truth." << endl;
cout << "(6)Bringing the light back into someone's eyes after telling them something they needed to know. They will never be the same." << endl;
cout << "(7)Making soemeone smile when they were down." << endl;

cin >> userChoice;                                                
switch(userChoice)                                                
{
  case 1:
     Green ++;
     break;
  case 2:
     Purple ++;
     break;
  case 3: 
     Red ++;
     break;
  case 4:
     Violet ++;
     break;
  case 5:
     Yellow ++;
     break;
  case 6: 
     Blue ++;
     break;
  case 7:
     Orange ++;
     break;
  default:
     break;
}
return 0;
}
