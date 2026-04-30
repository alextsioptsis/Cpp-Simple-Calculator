#include <iostream>
using namespace std;

int main() 
{
    double num1, num2, result;
    char symbol;

    while (true) {
        cout << "ΔΩΣΕ ΕΝΑΝ ΑΡΙΘΜΟ, ΕΝΑΝ ΤΕΛΕΣΤΗ ΚΑΙ ΕΝΑΝ ΑΛΛΟ ΑΡΙΘΜΟ: " << endl;
        
        cin >> num1 >> symbol >> num2;

      
        if (symbol == '+') {
            result = num1 + num2;
            cout << result << endl;
        } else if (symbol == '-') {
            result = num1 - num2;
            cout << result << endl;
        } else if (symbol == '*' || symbol == 'x' || symbol == 'X') {
            result = num1 * num2;
            cout << result << endl;
        } else if (symbol == '/') {
            if (num2 != 0) {
                result = num1 / num2;
                cout << result << endl; 
            } else {
                cout << "Διαίρεση με το μηδέν!" << endl;
            }
        } else {
            
            cout << "ΕΙΝΑΙ ΣΥΜΒΟΛΟ ΜΑΘΗΜΑΤΙΚΗΣ ΠΡΑΞΗΣ ΑΥΤΟ ΠΟΥ ΠΛΗΚΤΡΟΛΟΓΗΣΕΣ;" << endl;
        }

   
        while (true) {
            cout << "ΔΩΣΕ ΤΟΝ ΑΡΙΘΜΟ 1 ΓΙΑ ΤΗΝ ΕΠΟΜΕΝΗ ΠΡΑΞΗ ή 2 ΓΙΑ ΤΕΡΜΑΤΙΣΜΟ ΤΟΥ ΠΡΟΓΡΑΜΜΑΤΟΣ" << endl;
            cin >> num1; 

            if (num1 == 1) {
                break; 
            } else if (num1 == 2) {
                return 0; 
            } else {
                cout << "ΛΑΘΟΣ ΑΡΙΘΜΟΣ! ΔΟΚΙΜΑΣΕ ΞΑΝΑ ΔΙΝΟΝΤΑΣ ΤΟΝ ΑΡΙΘΜΟ 1 ΓΙΑ ΤΗΝ ΕΠΟΜΕΝΗ ΠΡΑΞΗ ή 2 ΓΙΑ ΤΕΡΜΑΤΙΣΜΟ ΤΟΥ ΠΡΟΓΡΑΜΜΑΤΟΣ: " << endl;
            }
        }
    }
}