#include <iostream>
#include <string>

char getGrade() {
    char grade = '';
    std::cin >> grade;
    return std::toupper(grade);
}

std::string ifGrade(char grade) {
    if(grade == A) {
        return "Good Job!!!!1!!";
    } else if(grade == B) {
        return "Nice Effort.";
    } else if(grade == C) {
        return "Try Harder.";
    } else if(grade == D) {
        return "You Need to Do Something Different, This Isn't Working.";
    } else if(grade == F) {
        return "I'm Disowning You.";
    } else {
        return "Speak American, Please.";
    }
}

std::string switchGrade(char grade) {
    switch(grade) {
        case A: return "Wow, that is super cool!"; break;
        case B: return "That's pretty cool"; break;
        case C: return "That is\nI\nn\nt\ne\nr\ne\ns\nt\ni\nn\ng"; break;
        case D: return "That is not cool"; break;
        case F: return "That is extremely lame, dude"; break;
        default: return "Speak American, Please.";
    }
}

void interface(bool method, std::string className) {    //method: true = if; false = switch
    std::cout << "What is your grade in " << className << " class? ";
    if method {
        std::cout << ifGrade(getGrade()) << "\n";
    } else {
        std::cout << switchGrade(getGrade()) << "\n";
    }
}

int main() {
    interface(true, "Science");
    interface(false, "Math");
    return 0;
}