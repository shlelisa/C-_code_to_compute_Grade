#include <iostream>

// Function to compute student grade
 string computeGrade(int score) {
    if (score >= 90 && score <= 100) {
        if (score >= 95) {
            return "A+";
        } else if (score >= 90) {
            return "A";
        }
    } else if (score >= 85 && score < 90) {
        return "A-";
    } else if (score >= 80 && score < 85) {
        return "B+";
    } else if (score >= 75 && score < 80) {
        return "B";
    } else if (score >= 70 && score < 75) {
        return "B-";
    } else if (score >= 65 && score < 70) {
        return "C+";
    } else if (score >= 60 && score < 65) {
        return "C";
    } else if (score >= 50 && score < 60) {
        return "C-";
    } else if (score >= 45 && score < 50) {
        return "D";
    } else if (score >= 40 && score < 45) {
        return "D-";
    } else if (score >= 0 && score < 40) {
        return "F";
    } else {
        // Invalid score, return 'I' for Invalid
        return "I";
    }
}

int main() {
    // Get student's score as input
    int studentScore;
     cout << "Enter the student's score: ";
     cin >> studentScore;

    // Check if the input is valid
    if (studentScore < 0 || studentScore > 100) {
         cout << "Invalid score. Please enter a score between 0 and 100." <<  endl;
    } else {
        // Compute and display the student's grade
         string studentGrade = computeGrade(studentScore);
         cout << "Student Grade: " << studentGrade <<  endl;
    }

    return 0;
}
