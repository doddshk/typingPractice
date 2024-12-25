#include <iostream>
#include <string>
#include <vector>
using namespace std;

class typing_practice {
  public:
    vector<string> text;
    int currentIndex;

    typing_practice() {
      string line;
      while(getline(std::cin, line)) {
        text.push_back(line);
      }
      currentIndex = 0;
    }
    void start() {
      while(true) {
        if(currentIndex == text.size()) {
          cout << "finished" << endl;
          return;
        }
        string newLine = text[currentIndex++];
        cout<<newLine<<endl;
        string input;
        getline(cin,input);
        if(checkInput(newLine, input) != 1) {
          cout << "wrong" << endl;
        }
        else {
          cout << "correct" << endl;
        }

      }
    }
    int checkInput(string newLine, string originalLine) {
      return newLine.compare(originalLine);
    }
};

int main() {
  typing_practice tp;
  return 1;
}
