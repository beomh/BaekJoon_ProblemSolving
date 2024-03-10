#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, double> gradeToPoint = {
    {"A+", 4.5},
    {"A0", 4.0},
    {"B+", 3.5},
    {"B0", 3.0},
    {"C+", 2.5},
    {"C0", 2.0},
    {"D+", 1.5},
    {"D0", 1.0},
    {"F", 0.0}
};

int main() {
    const int numOfScore = 20;
    //std::vector<SubjectScore> allScores(numOfScore);

    // std::string tmpInput;
    std::string subject, score, grade;
    double dScore = 0.0;
    double totalScore = 0.0;
    double totalPoint = 0.0;
    
    for(int i=0;i<numOfScore;i++){
        
        std::cin >> subject >> score >> grade;
        std::cin.ignore();
        dScore = std::stod(score);

        if(grade == "P")
            continue;

        if(gradeToPoint.find(grade) != gradeToPoint.end()){
            totalScore += dScore;
            totalPoint += (dScore * gradeToPoint.find(grade)->second);
        }
    }

    std::cout << totalPoint / totalScore << std::endl;
    return 0;
}