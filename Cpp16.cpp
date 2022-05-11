#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             
      int inches;           
      
   public:
     //constructors
      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      
      // display distance
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
      
      // overloaded minus (-) operator
      Distance operator- () {
         feet = -feet;
         inches = -inches;
         return Distance(feet, inches);
      }
};

int main() {
   Distance D1(11, 10), D2(-5, 11);
 
   -D1;                     // apply 
   D1.displayDistance();    // display D1

   -D2;                     // apply 
   D2.displayDistance();    // display D2

   return 0;
}
