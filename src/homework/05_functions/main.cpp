#include "func.h"

int main()
{
    char repeat = 'Y';

    while(repeat == 'Y' || repeat == 'y') {
        //Menu
        int selection = 0;

        cout << "1 - Get GC Content\n"
                "2 - Get DNA Complement\n"
                "3 - Exit\n\n"
                "Make a Selection: ";

        cin >> selection;

        if (selection == 3) //Exit
        {
            exit(0);
        }

        //Get user input
        string dna;
        cout << "\n\nPlease input a string of DNA: ";
        cin >> dna;

        for (char &i: dna) {
            i = toupper(i);
        }

        if (selection == 1)
        {
            cout<<"GC-content: "<<get_gc_content(dna);
            cout<<"\nRun the program again? (Y/N) ";
            cin>>repeat;

        } else if (selection == 2)
        {
            cout<<"The compliment is: "<<get_dna_complement(dna);
            cout<<"\nRun the program again? (Y/N) ";
            cin>>repeat;
        }

    }

	return 0;
}