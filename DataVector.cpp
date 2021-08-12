
#include <iostream>
#include <string>
#include "DataVector.h"

using namespace std;


// Character encoder for names.
wchar_t DataVector::CharacterEncoder(int index) {
    // uses gen 3 character encoding:
    // https://bulbapedia.bulbagarden.net/wiki/Character_encoding_(Generation_III)
    switch (index) {
        // Some of these were supposed to be different characters, but I can't figure out how to mix cout, wcout,
        // char_32t and strings in ways that don't screw everything up.
        default:
            return ' ';
        case 1:
            return L'À';
        case 2:
            return L'Á';
        case 3:
            return L'Â';
        case 4:
            return L'Ç';
        case 5:
            return L'È';
        case 6:
            return L'É';
        case 7:
            return L'Ê';
        case 8:
            return L'Ë';
        case 9:
            return L'Ì';
        case 10:
            return ' ';
        case 11:
            return L'Î';
        case 12:
            return L'Ï';
        case 13:
            return L'Ò';
        case 14:
            return L'Ó';
        case 15:
            return L'Ô';
        case 16:
            return L'Œ';
        case 17:
            return L'Ù';
        case 18:
            return L'Ú';
        case 19:
            return L'Û';
        case 20:
            return L'Ñ';
        case 21:
            return L'ß';
        case 22:
            return L'à';
        case 23:
            return L'á';
        case 25:
            return L'ç';
        case 26:
            return L'è';
        case 27:
            return L'é';
        case 28:
            return L'ê';
        case 29:
            return L'ë';
        case 30:
            return L'ì';
        case 32:
            return L'î';
        case 33:
            return L'ï';
        case 34:
            return L'ò';
        case 35:
            return L'ó';
        case 36:
            return L'ô';
        case 37:
            return L'œ';
        case 38:
            return L'ù';
        case 39:
            return L'ú';
        case 40:
            return L'û';
        case 41:
            return L'ñ';
        case 42:
            return L'º';
        case 43:
            return L'ª';
        case 44:
            return L'ᵉ';
        case 45:
            return '&';
        case 46:
            return '+';
        case 52:
            return 'L';
        case 53:
            return '=';
        case 54:
            return ';';
        case 80:
            return L'▯';
        case 81:
            return L'¿';
        case 82:
            return 'i';
        case 83:
            return 'P';
        case 84:
            return 'M';
        case 85:
            return 'O';
        case 86:
            return 'K';
        case 87:
            return 'B';
        case 88:
            return 'l';
        case 89:
            return '<';
        case 90:
            return L'Í';
        case 91:
            return '%';
        case 92:
            return '(';
        case 93:
            return ')';
        case 104:
            return L'â';
        case 111:
            return L'í';
        case 121:
            return L'⬆';
        case 122:
            return L'⬇';
        case 123:
            return L'⬅';
        case 124:
            return L'➡';
        case 125:
        case 126:
        case 127:
        case 128:
        case 129:
        case 130:
        case 131:
            // Each of these characters produces a different amount of whitespace,
            // I don't know how to implement that though.
            return '*';
        case 132:
            return L'ᵉ';
        case 133:
            return '<';
        case 134:
            return '>';
        case 160:
            return L'ʳ';
        case 161:
            return '0';
        case 162:
            return '1';
        case 163:
            return '2';
        case 164:
            return '3';
        case 165:
            return '4';
        case 166:
            return '5';
        case 167:
            return '6';
        case 168:
            return '7';
        case 169:
            return '8';
        case 170:
            return '9';
        case 171:
            return '!';
        case 172:
            return '?';
        case 173:
            return '.';
        case 174:
            return '-';
        case 175:
            return L'・';
        case 176:
            return '.';
        case 177:
            return L'“';
        case 178:
            return L'”';
        case 179:
            return L'‘';
        case 180:
            return L'’';
        case 181:
            return L'♂';
        case 182:
            return L'♀';
        case 183:
            return '$';
        case 184:
            return ',';
        case 185:
            return 'x';
        case 186:
            return '/';
        case 187:
            return 'A';
        case 188:
            return 'B';
        case 189:
            return 'C';
        case 190:
            return 'D';
        case 191:
            return 'E';
        case 192:
            return 'F';
        case 193:
            return 'G';
        case 194:
            return 'H';
        case 195:
            return 'I';
        case 196:
            return 'J';
        case 197:
            return 'K';
        case 198:
            return 'L';
        case 199:
            return 'M';
        case 200:
            return 'N';
        case 201:
            return 'O';
        case 202:
            return 'P';
        case 203:
            return 'Q';
        case 204:
            return 'R';
        case 205:
            return 'S';
        case 206:
            return 'T';
        case 207:
            return 'L';
        case 208:
            return 'V';
        case 209:
            return 'W';
        case 210:
            return 'X';
        case 211:
            return 'Y';
        case 212:
            return 'Z';
        case 213:
            return 'a';
        case 214:
            return 'b';
        case 215:
            return 'c';
        case 216:
            return 'd';
        case 217:
            return 'e';
        case 218:
            return 'f';
        case 219:
            return 'g';
        case 220:
            return 'h';
        case 221:
            return 'i';
        case 222:
            return 'j';
        case 223:
            return 'k';
        case 224:
            return 'l';
        case 225:
            return 'm';
        case 226:
            return 'n';
        case 227:
            return 'o';
        case 228:
            return 'p';
        case 229:
            return 'q';
        case 230:
            return 'r';
        case 231:
            return 's';
        case 232:
            return 't';
        case 233:
            return 'L';
        case 234:
            return 'v';
        case 235:
            return 'w';
        case 236:
            return 'x';
        case 237:
            return 'y';
        case 238:
            return 'z';
        case 239:
            return L'▶';
        case 240:
            return ':';
        case 241:
            return L'Ä';
        case 242:
            return 'Ö';
        case 243:
            return L'Ü';
        case 244:
            return L'ä';
        case 245:
            return L'ö';
        case 246:
            return L'ü';
        case 250:
        case 251:
        case 252:
        case 253:
        case 254:
        case 255:
            // Each of these is a special control character, effects would be too hard to implement.
            return '*';
    }
}

// Sets the species data for each Pokemon.
void DataVector::SetData(const string& filename) {
    ifstream fileInput;
    fileInput.open(filename);
    if (!fileInput.is_open()) {
        wcout << "There was an error opening the file." << endl;
        return;
    }
    int i;
    int maxSize = 0xFFFF;
    for (i = 0; i <= maxSize; i++ ) {
        PokemonData tempPoke;
        tempPoke.SetData(fileInput);
        tempPoke.SetIndex(i);
        dataVector.push_back(tempPoke);

    }
}

// Sets the names from the name file.
void DataVector::SetNames(const string& filename) {
    // Open up the file.
    ifstream FileInput;
    FileInput.open(filename);

    // Check if it failed to open.
    if (!FileInput.is_open()) {
        wcout << "There was an error opening the file." << endl;
        return;
    }
    // Resize the "names" private data member to be 65536 strings long.
    names.resize(0x10000);
    int tempNum;
    int i;
    int j = 0;
    NameCharacterVec.resize(0xB19DC + 1);
    for (i = 0; i < (0xB19DC + 1); i++) {
        FileInput >> hex >> tempNum;

        // Create a vector with all the values from the name array.
        NameCharacterVec.at(i) = tempNum;
    }

    for (i = 0; i < 0x10000; i++) {
        // Names are supposed to be 11 characters long. Start at species number * 11.
        j = 11 * i;
        while (NameCharacterVec.at(j) != 0xFF && j < 11*0x10000) {
            // Add the current character to the name at the current species number.
            names.at(i).push_back(CharacterEncoder(NameCharacterVec.at(j)));
            // look at the next character.
            j = j + 1;
        }
    }
}

void DataVector::SetDexNums(const string& filename) {
    ifstream FileInput;
    FileInput.open(filename);

    // Check if it failed to open.
    if (!FileInput.is_open()) {
        wcout << "There was an error opening the file." << endl;
        return;
    }
    dexNums.resize(0x10000);
    int tempHigh;
    int tempLow;
    int i;
    for (i = 0; i < 0x10000; i++) {
        FileInput >> hex >> tempLow >> tempHigh;
        dexNums.at(i) = tempHigh * 0x100 + tempLow;
    }
}
// Prints the name for a given index.
void DataVector::PrintName(int index) {
    // Print out index number in hexadecimal and decimal.
    wcout << "Species       : 0x" << hex << index << " (" << dec << index << ")" << endl;
    wcout << "Dex Number    : " << dec << dexNums.at(index) << endl;
    if (names.at(index).size() < 30) {

        // If the name is less than 30 characters just print it out normally.
        wcout << "Name          : " << names.at(index) << endl;
    }
    else {
        // If it's more than 30 characters truncate it. (Some names are thousands of characters long.)
        wcout << "Name          : " << names.at(index).substr(0, 30) << " ... (Size: " << dec << names.at(index).size() << ")" << endl;
    }

}

// Sets the animation ID. 
void DataVector::SetAnims(const string &filename1, const string& filename2) {
    // Open up the file.
    ifstream AnimIDstream;
    ifstream AnimAddressStream;
    unsigned int anim1, anim2, anim3, anim4;
    AnimIDstream.open(filename1);

    if (!AnimIDstream.is_open()) {
        wcout << "There was an error opening the file." << endl;
        return;
    }
    AnimIDs.resize(0x10000);
    int i;
    AnimIDs.at(0) = 0;
    for (i = 1; i < 0x10000; i++) {
        AnimIDstream >> hex >> AnimIDs.at(i);
    }
    AnimIDstream.close();

    AnimAddressStream.open(filename2);
    AnimAddresses.resize(0x100);
    if (!AnimAddressStream.is_open()) {
        wcout << "There was an error opening the file." << endl;
        return;
    }
    for (i = 0; i < 0x100; i++) {
        AnimAddressStream >> hex >> anim1 >> anim2 >> anim3 >> anim4;
        AnimAddresses.at(i) = anim4 * 0x01000000 + anim3 * 0x00010000 + anim2 * 0x00000100 + anim1;
    }
}

// I used this to find the Pokemon with the largest name, just useful for a different glitch.
void DataVector::PrintLargest() {
    int i;
    int maxSize = names.at(0).size();
    int maxLoc = 0;
    for (i = 0; i < names.size(); i++) {
        if (names.at(i).size() > maxSize) {
            maxSize = names.at(i).size();
            maxLoc = i;
        }
    }
    wcout << "Max size: " << maxSize << endl;
    wcout << "Species: " << hex << maxLoc << endl;
}

// Outputs a vector of species indices that have a chosen ability 1.
vector<bool> DataVector::GetPokemonWithAbility1(unsigned int AbilityID, unsigned int minID, unsigned int maxID) {
    unsigned int i;
    vector<bool> pokemonWithAbility;
    for (i = minID; i <= maxID; i++) {
        // If the first ability is equal to the user's choice of ability, push it back as true. Otherwise, false.
        if (dataVector.at(i).GetAbilities().at(0) == AbilityID) {
            pokemonWithAbility.push_back(true);
        }
        else {
            pokemonWithAbility.push_back(false);
        }
    }
    return pokemonWithAbility;
}

// Outputs a vector of species indices that have a chosen ability 2.
vector<bool> DataVector::GetPokemonWithAbility2(unsigned int AbilityID, unsigned int minID, unsigned int maxID) {
    unsigned int i;
    vector<bool> pokemonWithAbility;
    for (i = minID; i <= maxID; i++) {
        // If the first ability is equal to the user's choice of ability, push it back as true. Otherwise, it's false.
        if (dataVector.at(i).GetAbilities().at(1) == AbilityID) {
            pokemonWithAbility.push_back(true);
        }
        else {
            pokemonWithAbility.push_back(false);
        }
    }
    return pokemonWithAbility;
}

// Outputs a vector of species indices with a chosen typing.
vector<bool> DataVector::GetPokemonWithTyping(unsigned int type1, unsigned int type2, unsigned int minID, unsigned int maxID) {
    int i;
    vector<bool> pokemonWithTyping;
    for (i = minID; i <= maxID; i++) {
        // If the typing is the same as users chosen typing, output true at index. Otherwise, output false at index.
        if ((dataVector.at(i).GetTypings().at(0) == type1) && (dataVector.at(i).GetTypings().at(1) == type2)) {
            pokemonWithTyping.push_back(true);
        }
        else {
            pokemonWithTyping.push_back(false);
        }

    }
    return pokemonWithTyping;
}

// Search for just the first typing.
vector<bool> DataVector::GetPokemonWithTyping1(unsigned int type1, unsigned int minID, unsigned int maxID) {
    int i;
    vector<bool> pokemonWithTyping;
    for (i = minID; i <= maxID; i++) {
        // If the typing is the same as users chosen typing, output true at index. Otherwise, output false at index.
        if (dataVector.at(i).GetTypings().at(0) == type1) {
            pokemonWithTyping.push_back(true);
        }
        else {
            pokemonWithTyping.push_back(false);
        }

    }
    return pokemonWithTyping;
}

// Search for just the second typing.
vector<bool> DataVector::GetPokemonWithTyping2(unsigned int type2, unsigned int minID, unsigned int maxID) {
    int i;
    vector<bool> pokemonWithTyping;
    for (i = minID; i <= maxID; i++) {
        // If the typing is the same as users chosen typing, output true at index. Otherwise, output false at index.
        if (dataVector.at(i).GetTypings().at(1) == type2) {
            pokemonWithTyping.push_back(true);
        }
        else {
            pokemonWithTyping.push_back(false);
        }

    }
    return pokemonWithTyping;
}

//Outputs a vector
vector<bool> DataVector::GetPokemonWithBST(unsigned int bst, unsigned int minID, unsigned int maxID) {
    unsigned int i;
    vector<bool> pokemonWithBST;
    for (i = minID; i <= maxID; i++) {
        if (dataVector.at(i).GetBST() >= bst) {
            pokemonWithBST.push_back(true);
        }
        else (pokemonWithBST.push_back(false));
    }
    return pokemonWithBST;
}

// Outputs a vector of species indices that have a stable typing, name length and EXP curve.
vector<bool> DataVector::GetStablePokemon(unsigned int minID, unsigned int maxID) {
    unsigned int i;
    vector<bool> tempVec;
    for (i = minID; i <= maxID; i++) {
        if ((AnimIDs.at(i) <= 150) && (dataVector.at(i).IsTypingStable(dataVector.at(i).GetTypings().at(0))) &&
                (dataVector.at(i).IsTypingStable(dataVector.at(i).GetTypings().at(1))) && (names.at(i).size() < 12) && pokeCries.at(i) > 387) {
            /* Check if the typing is stable, if the exp curve is stable, and whether the name is too big.
             * If all of those criteria are met, then mark index as stable (true).
             *
             * NOTE: I don't really know if 100 characters is the max 'stable' name, it's just a relatively big number
             * that is still stable.
             */
            tempVec.push_back(true);
        }
        else {
            tempVec.push_back(false);
        }
    }
    return tempVec;
}

// Prints stats and other info for a chosen index.
void DataVector::PrintDataAtIndex(int index) {
    wcout << "***************************************************************" << endl;
    PrintName(index);
    dataVector.at(index).PrintStats();
    dataVector.at(index).PrintMisc();

    wcout << "Animation ID  : " << dec << AnimIDs.at(index) << endl;
    if (AnimIDs.at(index) > 150) {
        wcout << "Address: 0x" << hex << AnimAddresses.at(AnimIDs.at(index)) << dec << endl;
    }
    wcout << "Cry: " << pokeCries.at(index) << endl;
    wcout << "***************************************************************" << endl;

}
void DataVector::SetAbilityNames(const string &filename) {
    // Open up the file.
    ifstream FileInput;
    FileInput.open(filename);

    // Check if it failed to open.
    if (!FileInput.is_open()) {
        wcout << "There was an error opening the file." << endl;
        return;
    }
    // Resize the "names" private data member to be 65536 strings long.
    abilitynames.resize(256);
    int tempNum;
    int i;
    int j = 0;
    AbilityNameCharacterVec.resize(0xd64+1);
    for (i = 0; i < (0xd64+1); i++) {
        FileInput >> hex >> tempNum;

        // Create a vector with all the values from the name array.
        AbilityNameCharacterVec.at(i) = tempNum;
    }

    for (i = 0; i < 0x100; i++) {
        // Names are supposed to be 7 characters long. Start at type index number * 7.
        j = 13 * i;
        while (AbilityNameCharacterVec.at(j) != 0xFF && j < 0xD64) {
            // Add the current character to the name at the current type index number.
            abilitynames.at(i).push_back(CharacterEncoder(AbilityNameCharacterVec.at(j)));
            // look at the next character.
            j = j + 1;
        }
    }
}

void DataVector::SetCries(const string& crydata) {
    // Open up the file.
    ifstream FileInput;
    FileInput.open(crydata);

    // Check if it failed to open.
    if (!FileInput.is_open()) {
        wcout << "There was an error opening the file." << endl;
        return;
    }
    pokeCries.resize(0x10000);

    int i;
    int cryLow;
    int cryHigh;

    // Used https://github.com/pret/pokeemerald/blob/c6300b5325302673d10526e7f83412263349ce33/src/data/pokemon/cry_ids.h for reference.

    // Set first cries up to Celebi to species number.
    for (i = 0; i <= 251; i++) {
        pokeCries.at(i) = i;
    }
    // Gap of ?? species all have unown's cry.
    for (i = 252; i <= 276; i++) {
        pokeCries.at(i) = 201;
    }
    // From there, game reads from array gSpeciesIdToCryId[]
    for (i = 277; i < 0x10000; i++) {
        FileInput >> hex >> cryLow >> cryHigh;
        pokeCries.at(i) = cryHigh * 0x100 + cryLow;
    }
}