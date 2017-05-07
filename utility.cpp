
// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

bool isOdd(int x) { 
  if((x%2)!=0){
	return true;  //if remainder is not divisble by 2 with no remainder it is odd
  }else{
	return false;
}

}
bool isEven(int x) { 
  if((x%2)==0){
        return true; // if when dividing by 2 it returns a remainder of 0 it is even
  }else{ 
        return false;
}

}
bool isPrime(int x) { 
  int test = x/2;
  if(x<2){
	return false;
  }

  for(int i = 2; i<=test; i++){
	if((x%i)==0){
		return false; //checks the first half of the integers leading to that number to make
	}                     //sure that no numbers evenly go into it
  }

return true;
}
