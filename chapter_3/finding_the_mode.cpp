// Think Like A Programmer
// 
// Problem: Finding The Mode
//
// In statistics, the mode of a set of values is the value that
// appears most often. Write code that processes an array of survey
// data, where survey takers have responded to a question with a
// number in the range 1-10, to determine the mode of the data
// set. For our purpose, if multiple modes exist, any may be chosen.

#include <iostream>
using std::cin;
using std::cout;

int compareFunc(int, int);

int main() {
  const int ARRAY_SIZE = 12;
  int surveyData[ARRAY_SIZE] = {4, 7, 3, 8, 9, 7, 3, 9, 9, 3, 3, 10};

  int mostFrequent;
  int highestFrequency = 0;
  int currentFrequency = 0;

  qsort(surveyData, ARRAY_SIZE, sizeof(int), compareFunc);

  for(int i = 0; i < ARRAY_SIZE; i++) {
    currentFrequency++;
    // if (surveydata[i] IS LAST OCCURANCE OF A VALUE)
    if(i == ARRAY_SIZE - 1 || surveyData[i] != surveyData[i + 1]) {
      if(currentFrequency > highestFrequency) {
	highestFrequency = currentFrequency;
	mostFrequent = surveyData[i];
      }
      currentFrequency = 0;
    }
  }
}

int compareFunc(const void *voidA, const void *voidB) {
  int *intA = (int *) (voidA);
  int *intB = (int *) (voidB);
  return *intA - *intB;
}
