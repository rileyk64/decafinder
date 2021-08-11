#include <iostream>
#include "PokemonData.h"
#include "DataVector.h"
using namespace std;
int main() {
    cout << "-------======{ Decamark Finder }======-------" << endl;

    cout << "                 by rileyk64                   " << endl;

    cout << "***********************************************" << endl;

    // Create an object that will contain all the pokemon's data, and set all the values.
    DataVector SpeciesData;
    // I have it say that it's getting data/names because it takes a bit to set all the names.
    cout << "Getting data..." << endl;
    SpeciesData.SetData("speciesdata.txt");
    SpeciesData.SetDexNums("dexnumbersadjust.txt");
    SpeciesData.SetAnims("emeraldFrontAnimIDs.txt", "emeraldSpeciesAnimAddresses.txt");
    SpeciesData.SetCries("emeraldCryData.txt");
    cout << "Done!" << endl;

    cout << "Getting names..." << endl;
    SpeciesData.SetNames("speciesnames.txt");
    cout << "Done!" << endl;
    // SpeciesData.SetAbilityNames("leafgreenabilitynames.txt");
    cout << "***********************************************" << endl;
    char SIorQuit;
    bool programContinue;
    bool CheckAbility1;
    unsigned int ab1index;
    char Ab1YesNo;
    bool CheckAbility2;
    unsigned int ab2index;
    char Ab2YesNo;
    bool CheckTyping;
    unsigned int type1index;
    unsigned int type2index;
    char TypingYesNo;
    bool CheckBST;
    unsigned int bst;
    char BSTYesNo;
    unsigned int minID;
    unsigned int maxID;
    char StabYesNo;
    bool CheckStab;
    vector<bool> ab1Vec;
    vector<bool> ab2Vec;
    vector<bool> typeVec;
    vector<bool> BSTVec;
    vector<bool> StabVec;
    int index;
    char YesNo;
    int i;
    /*
    SpeciesData.PrintLargest();
    for (i = 0; i < SpeciesData.AnimAddresses.size(); i++) {
        cout << dec << i << ": 0x" << hex << SpeciesData.AnimAddresses.at(i) << dec << endl;
    }
    for (i = 0; i < 0x10000; i++) {
        if (SpeciesData.names.at(i).size() >13800 && SpeciesData.names.at(i).size() < 13850) {
            SpeciesData.PrintDataAtIndex(i);
        }
    }
    */

    /*for (i = 0; i < 0x100; i++) {
        cout << "Glitch " << i << ": " << SpeciesData.abilitynames.at(i) << endl;
        cout << endl << "*******************************************************" << endl;
    }*/
   /* int maxname = 0;
    int maxnameloc = 0;
    for (i = 0; i < 0x100; i++) {
        if (SpeciesData.abilitynames.at(i).size() > maxname) {
            maxname = SpeciesData.abilitynames.at(i).size();
            maxnameloc = i;
        }
    }
    */
    for (i = 0; i < 0x10000; i++) {
        if (/*SpeciesData.names.at(i).size() >= 7392 && SpeciesData.names.at(i).size() <= 7400*/ SpeciesData.dataVector.at(i).ExpCurve == 61) {
            SpeciesData.PrintDataAtIndex(i);

        }
    }
    // cout << maxnameloc << "biggest ability" << endl;
    SpeciesData.PrintLargest();
   cout << "**** character at: " << SpeciesData.names.at(8517).at(1000) << endl;
    do {
        cout << "Enter search mode or index checker mode?" << endl;
        cout << "(S for search, I for index checker, any other to quit)" << endl;
        cin >> SIorQuit;
        switch (SIorQuit) {
            case 'S':
            case 's': {
                programContinue = true;

                // *****************************************************
                // Search mode.
                // *****************************************************

                cout << "Choose minimum and maximum range." << endl;
                cout << "(For all pokemon, minimum is 0 and maximum is 65535)" << endl;
                cout << "Select minimum ID: " << endl;

                // Get the minimum ID, make sure its within bounds.

                do {
                    cin >> minID;
                    if (!(minID >= 0 && minID <= 0xFFFF)) {
                        cout << "Invalid choice of minimum ID. (Must be between 0 and 65535)" << endl;
                        cout << "Select minimum ID: " << endl;
                    }
                } while (!(minID >= 0 && minID <= 0xFFFF));

                cout << "Select maximum ID: " << endl;

                // Get the max ID, make sure its within bounds.
                do {
                    cin >> maxID;
                    // Check if max ID is in bounds, is greater than min ID, and is a number.
                    if (!(maxID >= 0 && maxID <= 0xFFFF && (maxID > minID))) {
                        cout << "Invalid choice of maximum ID. (Must be between 0 and 65535 and/or greater than minimum ID.)" << endl;
                        cout << "Select maximum ID: " << endl;
                    }
                } while (!(maxID >= 0 && maxID <= 0xFFFF && (maxID > minID)));

                cout << "Filter first ability? (Y/N)" << endl;
                cin >> Ab1YesNo;
                switch (Ab1YesNo) {
                    case 'Y':
                    case 'y':
                        CheckAbility1 = true;
                        // I have these checks in each filter to make the final filtering easier.
                        cout << "Which ability would you like? (input index between 0 and 255)" << endl;

                        // Make sure user choice is within bounds.
                        do {
                            cin >> ab1index;
                            if (!(ab1index >= 0 && ab1index <= 255)) {
                                cout << "Invalid choice. (Must be between 0 and 255)" << endl;
                            }
                        } while (!(ab1index >= 0 && ab1index <= 255));
                        ab1Vec = SpeciesData.GetPokemonWithAbility1(ab1index, minID, maxID);
                        break;
                    default:
                        CheckAbility1 = false;
                        break;
                }

                cout << "Filter second ability? (Y/N)" << endl;
                cin >> Ab2YesNo;
                switch (Ab2YesNo) {
                    case 'Y':
                    case 'y':
                        CheckAbility2 = true;
                        cout << "Which second ability would you like? (input index between 0 and 255)" << endl;
                        do {
                            cin >> ab2index;
                            if (!(ab2index >= 0 && ab2index <= 255)) {
                                cout << "Invalid choice. (Must be between 0 and 255)" << endl;
                            }
                        } while (!(ab2index >= 0 && ab2index <= 255));
                        ab2Vec = SpeciesData.GetPokemonWithAbility2(ab1index, minID, maxID);
                        break;
                    default:
                        CheckAbility2 = false;
                        break;
                }

                cout << "Filter typing? (0 for no, 1 for first typing, 2 for second, 3 for both)" << endl;
                cin >> TypingYesNo;
                switch (TypingYesNo) {
                    case '1':
                        // Filter by first typing.
                        CheckTyping = true;
                        cout << "Which typing would you like?" << endl;
                        do {
                            cout << "Enter first type index. (0 to 255)" << endl;
                            cin >> type1index;
                            if (!(type1index >= 0 && type1index <= 255)) {
                                cout << "Invalid choice. (Must be between 0 and 255)" << endl;
                            }
                        } while (!(type1index >= 0 && type1index <= 255));

                        typeVec = SpeciesData.GetPokemonWithTyping1(type1index, minID, maxID);
                        break;
                    case '2':
                        // Filter by second typing.
                        CheckTyping = true;
                        cout << "Which typing would you like?" << endl;
                        do {
                            cout << "Enter second type index. (0 to 255)" << endl;
                            cin >> type2index;
                            if (!(type2index >= 0 && type2index <= 255)) {
                                cout << "Invalid choice. (Must be between 0 and 255)" << endl;
                            }
                        } while (!(type2index >= 0 && type2index <= 255));

                        typeVec = SpeciesData.GetPokemonWithTyping2(type2index, minID, maxID);
                        break;
                    case '3':
                        CheckTyping = true;
                        cout << "Which typing would you like?" << endl;
                        do {
                            cout << "Enter first type index. (0 to 255)" << endl;
                            cin >> type1index;
                            if (!(type1index >= 0 && type1index <= 255)) {
                                cout << "Invalid choice. (Must be between 0 and 255)" << endl;
                            }
                        } while (!(type1index >= 0 && type1index <= 255));
                        do {
                            cout << "Enter second type index. (0 to 255)" << endl;
                            cin >> type2index;
                            if (!(type2index >= 0 && type2index <= 255)) {
                                cout << "Invalid choice. (Must be between 0 and 255)" << endl;
                            }
                        } while (!(type2index >= 0 && type2index <= 255));

                        typeVec = SpeciesData.GetPokemonWithTyping(type1index, type2index, minID, maxID);
                        break;

                    default:
                        CheckTyping = false;
                        break;
                }

                // Ask to filter base stat total.
                cout << "Filter base stat total? (Y/N)" << endl;
                cin >> BSTYesNo;
                switch (BSTYesNo) {
                    case 'Y':
                    case 'y':
                        CheckBST = true;
                        do {
                            cout << "Enter BST. (0 to 1530)" << endl;
                            cin >> bst;
                            if (!(bst >= 0 && bst <= 255 * 6)) {
                                cout << "Invalid choice. (Must be between 0 and 1530)" << endl;
                            }
                        } while (!(bst >= 0 && bst <= 255 * 6));
                        BSTVec = SpeciesData.GetPokemonWithBST(bst, minID, maxID);
                        break;
                    default:
                        CheckBST = false;
                        break;

                }

                // Ask to filter stability.
                cout << "Filter type/name/EXP stability? (Y/N)" << endl;
                cin >> StabYesNo;
                switch (StabYesNo) {
                    case 'Y':
                    case 'y':
                        CheckStab = true;
                        StabVec = SpeciesData.GetStablePokemon(minID, maxID);
                        break;
                    default:
                        CheckStab = false;
                        break;
                }

                vector<unsigned int> resultingVector;
                unsigned int i;
                resultingVector.resize(maxID - minID + 1);
                // Set all the values of the resulting vector to one. (with no filters are pokemon are included.)
                for (i = 0; i < resultingVector.size(); i++) {
                    resultingVector.at(i) = 1;
                }

                // Get the resulting bool vector with the filters applied. Each time multiply resulting vector
                // by chosen filtered vectors: all indices that don't match filters will then be zero.

                if (CheckAbility1) {
                    for (i = 0; i <= maxID - minID; i++) {
                        resultingVector.at(i) *= ab1Vec.at(i);
                    }
                }
                if (CheckAbility2) {
                    for (i = 0; i <= maxID - minID; i++) {
                        resultingVector.at(i) *= ab2Vec.at(i);
                    }
                }
                if (CheckTyping) {
                    for (i = 0; i <= maxID - minID; i++) {
                        resultingVector.at(i) *= typeVec.at(i);
                    }
                }
                if (CheckBST) {
                    for (i = 0; i <= maxID - minID; i++) {
                        resultingVector.at(i) *= BSTVec.at(i);
                    }
                }
                if (CheckStab) {
                    for (i = 0; i <= maxID - minID; i++) {
                        resultingVector.at(i) *= StabVec.at(i);
                    }
                }

                // Create a new vector with only the indices that match the filters.
                vector<unsigned int> filteredSpeciesVector;

                for (i = 0; i <= maxID - minID; i++) {
                    // If the number at an index is 1, that means it passed all the filters. Add index to filtered species vector.
                    if (resultingVector.at(i) == 1) {
                        filteredSpeciesVector.push_back(i + minID);
                        cout << "Pokemon: " << dec << i + minID << " (0x" << hex << i + minID << ")" << endl;
                    }
                }
                // Check if the vector is empty (i.e there were no pokemon that matched all the filters.
                if (filteredSpeciesVector.empty()) {
                    cout << "No Pokemon matched your specifications." << endl;
                } else {
                    cout << "Detailed description of each result? (Y/N)" << endl;
                    cin >> YesNo;
                    switch (YesNo) {
                        case 'Y':
                        case 'y':
                            // If they said yes, go through each filtered index and print out their information.
                            for (i = 0; i < filteredSpeciesVector.size(); i++) {
                                SpeciesData.PrintDataAtIndex(filteredSpeciesVector.at(i));
                                cout << endl;
                            }
                            break;
                        default:
                            break;
                    }
                }
                // Another space for better formatting.
                cout << endl;
                break;
            }
            case 'I':
            case 'i': {

                // *****************************************************
                // Index checker mode.
                // *****************************************************

                programContinue = true;

                do {
                    /* Ask the user what index they want to check, then print out its data.
                     * If the index is invalid then ask them to choose again.
                     */
                    do {
                        cout << "What index would you like to check?" << endl;
                        cin >> hex >> index;
                        if (!((index >= 0) && (index <= 65535))) {
                            cout << "Error: please choose a number between 0 and 65535." << endl << endl;
                        }
                    }
                    while ((!((index >= 0) && (index <= 65535))));
                    SpeciesData.PrintDataAtIndex(index);
                    cout << endl;
                    cout << "Continue? (Y/N)" << endl;
                    cin >> YesNo;
                } while (YesNo != 'N' && YesNo != 'n');
                cout << endl;
                break;
            }
            default:
                programContinue = false;
        }
    }
    while(programContinue);



    return 0;
}
