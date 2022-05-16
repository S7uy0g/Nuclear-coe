#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
      
   public:
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      
      // method to display distance
      void displayDistance() {
         cout <<feet<<"ft"<< inches<<"inches" <<endl;
      }
      
      // overloaded minus (-) operator
      Distance operator-- () {
         feet = feet-2;
         inches = inches-2;
         return Distance(feet, inches);
      }
};

int main() {
   Distance D1(8,9), D2(10,11);
 
   --D1;                     // apply negation
   D1.displayDistance();    // display D1

   --D2;                     // apply negation
   D2.displayDistance();    // display D2

   return 0;
}
