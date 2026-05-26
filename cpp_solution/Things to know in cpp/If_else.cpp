//TUF QUESTION 2
//Given marks of a student, print on the screen:
//Grade A if marks >= 90
//Grade B if marks >= 70
//Grade C if marks >= 50
//Grade D if marks >= 35
//Fail, otherwise.
//For printing use:-
// C++ : cout << variable_name;

//Solution: 
class Solution {
public:
    void studentGrade(int marks) {
        if(marks>=90){
            cout<<"Grade A";
        }
        else if(marks>=70){
            cout<<"Grade B";
        }
        else if(marks>=50){
            cout<<"Grade C";
        }
        else if (marks>=35){
            cout<<"GRADE D";
        }
        else{
            cout<<"Fail";
        }
    }
};