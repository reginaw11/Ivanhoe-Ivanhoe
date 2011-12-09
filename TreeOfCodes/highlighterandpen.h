/* Things we want to keep
* Keep all mother/fathers/children
* Alone/darkness/empty
* Keep a variable called poetic or flow or something that keeps track */
*use of allegories (weeks pass like boats...)
* eyes/half (closed,naked,animal,shameless)/silence
* shadows/anger
*sense of human feeling (shown throughout characters of mother/father/narr)

#import "treeofcodes.h"
#import "StreetOfCrocodiles.h"
#include <ofstream> //ofstream lets you read and write to files
/* Okay, put the words in the following format in listOfWords:
word$word$word
This way I can use a search function to go through the list more easily.  No spaces please!
*/
string listOfWords =/*put the words here*/ ;
Public{
    string poeticWords[1000] = new array[1000]; //this creates a corpus of applicable words and stores them in a list
    for (int i=0; i < poeticWords.length; i++){}
        string tempWord = listOfWords.getLineBefore($);
        tempWord = poeticWords[i];
        delete listOfWords.getLineBefore($);
    eyes (int i=0; i <poeticWords.length; i++) {
         string tempWord = listOfWords.getLineBefore($);
        tempWord = poeticWords[i];
        delete listOfWords.getLineBefore($);
    shadows (int i=0; i<poeticWords.length; i++) {
         string tempWord = listOfWords.getLineBefore($);
        tempWord = poeticWords[i];
        delete listOfWords.getLineBefore($);
    anger (int i=0; i<poeticWords.length; i++) {
         string tempWord = listOfWords.getLineBefore($);
        tempWord = poeticWords[i];
        delete listOfWords.getLineBefore($);
    silence (int i=0; i<poeticWords.length; i++) {
         string tempWord = listOfWords.getLineBefore($);
        tempWord = poeticWords[i];
        delete listOfWords.getLineBefore($);
    naked (int i=0; i<poeticWords.length; i++) }
         string tempWord = listOfWords.getLineBefore($);
        tempWord = poeticWords[i];
        delete listOfWords.getLineBefore($);
    }
    }
    }
    }
    }
    ifstream in("StreetofCrocodiles.h"); //Reads in the text file
    While (inFile){
    String line=br.readLine();
    string streetOfCrocodilesLines[1000000] = new array[100000];//stores the whole street of crocodiles text line by line
    if (line=="street of crocodiles" or line=="Street of Crocodiles"){
      line="tree of codes"; //changes "street of crocodiles" to "tree of codes whenever it finds it"
    }
    if (line=="Bruno Schulz"){
      line="Jonathan Safran Foer"
          }//changes the author's name whenever it comes across it
  }
  
  for (int i=0; i<streetOfCrocodilesLines.length; i++){//goes through entire story
      for (int x=0; x<poeticWords.length; x++){//goes through the list of poetic words 
      if (streetOfCrocodilesLines[i].contains(poeticWords[x])){//if the line contains the poeticword
          myfile.open("treeofcodes.h"); //opens treeofcodes.h so we can write to it
          myfile<<poeticWords[x]; //writes poetic words to treeofcodes.h
      }
      
      }
      myfile.close(); //closes the treeofcodes.h file we were writing to
  }
      
}