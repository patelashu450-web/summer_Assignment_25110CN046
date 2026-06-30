#include <iostream>
#include <string>
using namespace std;

struct Question {
    string text;
    string optionA;
    string optionB;
    string optionC;
    string optionD;
    char correctOption;
};
int main() {
    int score = 0;
    const int totalQuestions = 3;

    Question q[totalQuestions] = {
        {"What is the capital of France?", "A. London", "B. Berlin", "C. Paris", "D. Madrid", 'C'},
        {"Which planet is known as the Red Planet?", "A. Earth", "B. Mars", "C. Venus", "D. Jupiter", 'B'},
        {"What is 5 + 7?", "A. 10", "B. 11", "C. 12", "D. 13", 'C'}
    }; 
    cout << "     WELCOME TO THE QUIZ     " << endl;

    for (int i = 0; i < totalQuestions; i++) {
        cout << "\nQuestion " << (i + 1) << ": " << q[i].text << endl;
        cout << q[i].optionA << endl;
        cout << q[i].optionB << endl;
        cout << q[i].optionC << endl;
        cout << q[i].optionD << endl;

        char answer;
        cout << "Enter your answer (A, B, C, or D): ";
        cin >> answer;
        answer = toupper(answer);

        if (answer == q[i].correctOption) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect! The correct answer was " << q[i].correctOption << "." << endl;
        }
    }
    cout << "\n=============================" << endl;
    cout << "          QUIZ OVER!         " << endl;
    
    cout << "You scored " << score << " out of " << totalQuestions << "." << endl;

    return 0;
}
