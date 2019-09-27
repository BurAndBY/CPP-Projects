/******************************************************************************
Portal Quest by BurAndBY

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   double AI_Var;
   cout << "You wake up in a cell, next to it is a toilet, a table, a radio tuned to an incomprehensible frequency, and some kind of strange thing. After 5 seconds a blue oval appears in it. What are you going to do?" <<endl;
   cout << "1 - Пройти в синий овал"<< endl;
   cout << "0 - Прислушаться"<< endl;
   cin  >> AI_Var;
   if (AI_Var == 0)
   {
       cout << "You heard: 'Hello and, again, welcome to the Aperture Science computer-aided enrichment center. The portal will open in three, two, one. [bzzzzzt]";
      
   }
   cout << "You go into the blue oval and appear outside the camera. You see the door. What are you going to do?" <<endl;
   cout << "1 - I will go through the door"<< endl;
   cout << "0 - Listen"<< endl;
   cin  >> AI_Var;
   if (AI_Var == 0)
   {
       cout << "For your own safety and the safety of others, please refrain from-- [bzzzzzt].Por favor bordón de fallar Muchos gracias de fallar gracias"<<endl;
   }
  cout << "This Aperture Science Material Emancipation Grill will vaporize any unauthorized equipment that passes through it - for instance, the Aperture Science Weighted Storage Cube." <<endl;
           cout << "1 - Pass the test and pass the opening door"<< endl;
           cout << "0 - Listen"<< endl;
   cin  >> AI_Var;
      if (AI_Var == 0)
   {
       cout << "Please place the Weighted Storage Cube on the Fifteen Hundred Megawatt Aperture Science Heavy Duty Super-Colliding Super Button." <<endl;
   }
  cout << "Please place the Weighted Storage Cube on the Fifteen Hundred Megawatt Aperture Science Heavy Duty Super-Colliding Super Button." <<endl;          
                cout << "1 - Place the Weighted Storage Cube on the Fifteen Hundred Megawatt Aperture Science Heavy Duty Super-Colliding Super Button."<< endl;
                cout << "0 - Stay on"<< endl;
   cin  >> AI_Var;
   if (AI_Var == 0)
   {
       cout << "Go through the test chamber, otherwise the deadly gas neurotoxin will kill you." <<endl;
   }
  cout << "Perfect. Please move quickly to the chamberlock, as the effects of prolonged exposure to the Button are not part of this test." <<endl;
           cout << "1 - Leave the test chamber"<< endl;
                cout << "0 - No"<< endl;
   cin  >> AI_Var;
   if (AI_Var == 1)
   cout << "Thank you for the long passage of the quest 'Portal Quest' from BurAndBY";
   return 0;
}
   
  



