#include <iostream>
using namespace std;
bool runProgram = true;

int main() {

    double rawMagicDamage, mR, mpR, dM, dR, resistedMagicDamage1, resistedMagicDamage2;
    double percentageIncrease;
    char exit;

    while (runProgram)
    {
        cout << "Enter how much magic damage you will do: ";
        cin >> rawMagicDamage;

        cout << "Enter how much magic resist the opponent originally has: ";
        cin >> mpR;

        cout << "Enter how much magic resist the opponent now has with MR reduction: ";
        cin >> mR;

        resistedMagicDamage1 = rawMagicDamage / (1 + mpR / 100);
        resistedMagicDamage2 = rawMagicDamage / (1 + mR / 100);

        percentageIncrease = ((resistedMagicDamage2 - resistedMagicDamage1)/resistedMagicDamage1) * 100;
        cout << "The damage increase from your MR Reduction is around: " << percentageIncrease << "%." << endl;
        cout << "Your damage with an MR of " << mpR << " was around: " << resistedMagicDamage1 << endl;
        cout << "Your damage with an MR of " << mR << " was around: " << resistedMagicDamage2 << endl;
        
        cout << endl << "If you wish to calculate again enter anything, otherwise, type q to quit the program." << endl;
        cin >> exit;
        if (tolower(exit) == 'q')
        {
            runProgram = false;
        }
    }
    

    return 0;
}

