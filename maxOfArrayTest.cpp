#include "arrayFuncs.h"
#include "tddFuncs.h"
//tests our previous max array functions for several different matricies that might cause error
int main() {
 int fiveThrees[5]={3,3,3,3,3};
   assertEquals(3,
         maxOfArray(fiveThrees,5),
               "maxOfArray(fiveThrees,5)");

 int zeros[3]={0,0,0}; // initializes all elements to 0
     assertEquals(0,
         maxOfArray(zeros,3),
               "maxOfArray(zeros,3)" );

         
 int fiveInts[5]={2,3,4,-9,7};
     assertEquals(7,
          maxOfArray(fiveInts,5),
               "maxOfArray(fiveInts,5)" );
             
     assertEquals(3,
          maxOfArray(fiveInts,2),
               "maxOfArray(fiveInts,2)" );
                 
     assertEquals(4,
          maxOfArray(fiveInts,3),
               "maxOfArray(fiveInts,3)" );
                     
 int meaning[] = {42};
     assertEquals(42,
          maxOfArray(meaning,1),
               "maxOfArray(meaning,1)" );
                          
 int mix[10]={-42,12,-9,56,123,-32767,48}; // last three will be zero
     assertEquals(123,
          maxOfArray(mix,10),
               "maxOfArray(mix,10)" );

  return 0;
}
