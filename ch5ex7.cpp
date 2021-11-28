/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Luke Faulkner
 */

#include <iostream>
#include <cmath>

using namespace std;

void quadraticFormula(float a, float b, float c);

int main(){
    // Variables
    float a = 0, b = 0, c = 0; 

    // Prompt
    cout << "Please enter a.\n";
    cin >> a;
    cout << "Please enter b.\n";
    cin >> b;
    cout << "Please enter c.\n";
    cin >> c;
    

    // Enter a, b, and c values into the quadratic equation
    quadraticFormula(a, b, c);

    return 0;
}

void quadraticFormula(float a, float b, float c){
    float underSquareRootVal = pow(b, 2) - (4 * a * c);
    if (underSquareRootVal < 0){
        cout << "There are no real roots to this equation.";
    }
    else {
        float root1, root2;
        root1 = (-b + sqrt(underSquareRootVal))/(2 * a);
        root2 = (-b - sqrt(underSquareRootVal))/(2 * a);
        cout << "The roots of the given quadratic equation are " << root1 << " and " << root2 << ".";
    }
    return;
}