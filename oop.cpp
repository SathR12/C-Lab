

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

typedef long long ll;

using namespace std;


class Student {
    public:
        static int strength;
    
    private:
        string name;
        int grade, age;
        char gender;
        
    
    public:
        Student(string name, int grade, int age, char gender) {
            this -> name = name;
            this -> grade = grade;
            this -> age = age;
            this -> gender = gender;
            
        }
    
        string getName(void) {
        
            return this -> name;
        }
    
        int getGrade(void) {
    
            return this -> grade;
        }
    
        int getAge(void) {

            return this -> age;
        }
    
        char getGender(void) {

            return this -> gender;
        }
    

};


    int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    Student a("thomas", 10, 16, 'm');
    cout << "The student's name is: " << a.getName() << endl;
    cout << "The student's grade is: " << a.getGrade() << endl;
    cout << "The student's age is: " << a.getAge() << endl;
    cout << "The student is a "; (a.getGender() == 'm') ? cout << "male" << endl : cout << "female" << endl;
    
    
    
    return 0;
}



