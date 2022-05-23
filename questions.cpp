#include <iostream>

using namespace std;

int x;
int y;

// question 1
int question1(){
    cout << "Please enter the firts number: " << endl;
    cin >> x;
    cout << "Please enter the second number: " << endl;
    cin >> y;
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x << endl;
    cout << y << endl;
    if(y != 0){
        cout << x/y << endl;
    }else{
        cout << "Cannot display" << endl;
    }
    return 0;
}

// question 2
int question2(){
    int code;
    cout << "Please enter the firts number: " << endl;
    cin >> x;
    cout << "Please enter the second number: " << endl;
    cin >> y;
    cout << "Enter a code number: " << endl;
    cin >> code;
    if(code == 1){
        cout << x + y << endl;
    }else if(code == 2){
        cout << x - y << endl;
    }else if (code == 3){
        cout << x << endl;
        cout << y << endl;
    }else if(code == 4){
        if(y != 0){
        cout << x/y << endl;
        }else{
        cout << "Cannot display" << endl;
        }
    }else{
        cout << "Error" << endl;
    }
    return 0;
}

// question 3
int question3(){
    int score;
    int studentID;
    cout << "Enter student ID: " << endl;
    cin >> studentID;
    cout << "Enter exam scores: " << endl;
    cin >> score;

    if(score > 0 and score < 60){
        cout << "Your student ID: " << studentID << endl;
        cout << "Grade F" << endl;
    }else if(score > 60 and score <= 69){
        cout << "Your student ID: " << studentID << endl;
        cout << "Grade D" << endl;
    }else if(score > 70 and score <= 79){
        cout << "Your student ID: " << studentID << endl;
        cout << "Grade C" << endl;
    }else if(score > 80 and score <= 89){
        cout << "Your student ID: " << studentID << endl;
        cout << "Grade B" << endl;
    }else{
        cout << "Your student ID: " << studentID << endl;
        cout << "Grade A" << endl;
    }
    return 0;
}

// question 4
int question4(){
    char discountCode;
    float amount;

    cout << "Enter the Code(H, F, T, Q, Z): " << endl;
    cin >> discountCode;
    cout << "Enter the amount: " << endl;
    cin >> amount;

    if(discountCode == 'H'){
        float discount = (amount * 0.5) + amount;
        cout << discount << endl;
    }else if(discountCode == 'F'){
        float discount = (amount * 0.4) + amount;
        cout << discount << endl;
    }else if(discountCode == 'T'){
        float discount = (amount * 0.33) + amount;
        cout << discount << endl;
    }else if(discountCode == 'Q'){
        float discount = (amount * 0.25) + amount;
        cout << discount << endl;
    }else if(discountCode == 'Z'){
        cout << "No discount" << endl;
        cout << amount << endl;
    }else{
        cout << "Invalid code" << endl;
    }
    return 0;
}

// question 5
int question5(){
    float weightOfparcel;

    cout << "Enter the weight of the parcel: " << endl;
    cin >> weightOfparcel;

    if(weightOfparcel < 2.5){
        float cost = weightOfparcel * 3.5;
        cout << "$" << cost << endl;
    }else if(weightOfparcel >= 2.5 and weightOfparcel <= 5){
        float cost = weightOfparcel * 2.85;
        cout << "$" << cost << endl;
    }else if(weightOfparcel > 5){
        float cost = weightOfparcel * 2.45;
        cout << "$" << cost << endl;
    }
    return 0;
}

int main(){
    // question1();
    // question2();
    // question3();
    // question4();
    question5();

}