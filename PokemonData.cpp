
#include "PokemonData.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

PokemonData::PokemonData() {
    Index = -1;
    HP = 0;
    Atk = 0;
    Def = 0;
    Spe = 0;
    SpA = 0;
    SpD = 0;
    Type1 = 0;
    Type2 = 0;
    CatchRate = 0;
    ExpYield = 0;
    EVYieldHigh = 0;
    EVYieldLow = 0;
    Item1High = 0;
    Item1Low = 0;
    Item2High = 0;
    Item2Low = 0;
    Gender = 0;
    EggCycle = 0;
    Friendship = 0;
    ExpCurve = 0;
    Egg1 = 0;
    Egg2 = 0;
    Ability1 = 0;
    Ability2 = 0;
    SafariRate = 0;
    ColorAndFlip = 0;
    Padding = 0;
}
// Gets the typing name based on a given index.
wstring PokemonData::GetTypingName(unsigned int typeIndex) {
    // Uses this as reference: https://bulbapedia.bulbagarden.net/wiki/Type_chart_data_structure_(Generation_III)
    switch (typeIndex) {
        case 0:
            return L"Normal";
        case 1:
            return L"Fighting";
        case 2:
            return L"Flying";
        case 3:
            return L"Poison";
        case 4:
            return L"Ground";
        case 5:
            return L"Rock";
        case 6:
            return L"Bug";
        case 7:
            return L"Ghost";
        case 8:
            return L"Steel";
        case 9:
            return L"???";
        case 10:
            return L"Fire";
        case 11:
            return L"Water";
        case 12:
            return L"Grass";
        case 13:
            return L"Electric";
        case 14:
            return L"Psychic";
        case 15:
            return L"Ice";
        case 16:
            return L"Dragon";
        case 17:
            return L"Dark";
        case 18:
            return L"Cool";
        case 19:
            return L"Beauty";
        case 20:
            return L"Cute";
        case 21:
            return L"Smart";
        case 22:
            return L"Tough";
        default:
            return L"Glitch " + to_wstring(typeIndex);
    }
}
// Takes in an ability index number and outputs a string with the name of the ability.
wstring PokemonData::GetAbilityName(unsigned int ability) {
    // Using this article as a guide. https://bulbapedia.bulbagarden.net/wiki/Ability#List_of_Abilities

    switch(ability) {
        case 0:
            return L"No ability";
        case 1:
            return L"Stench";
        case 2:
            return L"Drizzle";
        case 3:
            return L"Speed Boost";
        case 4:
            return L"Battle Armor";
        case 5:
            return L"Sturdy";
        case 6:
             return L"Damp";
        case 7:
            return L"Limber";
        case 8:
            return L"Sand Veil";
        case 9:
            return L"Static";
        case 10:
            return L"Volt Absorb";
        case 11:
            return L"Water Absorb";
        case 12:
            return L"Oblivious";
        case 13:
            return L"Cloud Nine";
        case 14:
            return L"Compound Eyes";
        case 15:
            return L"Insomnia";
        case 16:
            return L"Color Change";
        case 17:
            return L"Immunity";
        case 18:
            return L"Flash Fire";
        case 19:
            return L"Shield Dust";
        case 20:
            return L"Own Tempo";
        case 21:
            return L"Suction Cups";
        case 22:
            return L"Intimidate";
        case 23:
            return L"Shadow Tag";
        case 24:
            return L"Rough Skin";
        case 25:
            return L"Wonder Guard";
        case 26:
            return L"Levitate";
        case 27:
            return L"Effect Spore";
        case 28:
            return L"Synchronize";
        case 29:
            return L"Clear Body";
        case 30:
            return L"Natural Cure";
        case 31:
            return L"Lightning Rod";
        case 32:
            return L"Serene Grace";
        case 33:
            return L"Swift Swim";
        case 34:
            return L"Chlorophyll";
        case 35:
            return L"Illuminate";
        case 36:
            return L"Trace";
        case 37:
            return L"Huge Power";
        case 38:
            return L"Poison Point";
        case 39:
            return L"Inner Focus";
        case 40:
            return L"Magma Armor";
        case 41:
            return L"Water Veil";
        case 42:
            return L"Magnet Pull";
        case 43:
            return L"Soundproof";
        case 44:
            return L"Rain Dish";
        case 45:
            return L"Sand Stream";
        case 46:
            return L"Pressure";
        case 47:
            return L"Thick Fat";
        case 48:
            return L"Early Bird";
        case 49:
            return L"Flame Body";
        case 50:
            return L"Run Away";
        case 51:
            return L"Keen Eye";
        case 52:
            return L"Hyper Cutter";
        case 53:
            return L"Pickup";
        case 54:
            return L"Truant";
        case 55:
            return L"Hustle";
        case 56:
            return L"Cute Charm";
        case 57:
            return L"Plus";
        case 58:
            return L"Minus";
        case 59:
            return L"Forecast";
        case 60:
            return L"Sticky Hold";
        case 61:
            return L"Shed Skin";
        case 62:
            return L"Guts";
        case 63:
            return L"Marvel Scale";
        case 64:
            return L"Liquid Ooze";
        case 65:
            return L"Overgrow";
        case 66:
            return L"Blaze";
        case 67:
            return L"Torrent";
        case 68:
            return L"Swarm";
        case 69:
            return L"Rock Head";
        case 70:
            return L"Drought";
        case 71:
            return L"Arena Trap";
        case 72:
            return L"Vital Spirit";
        case 73:
            return L"White Smoke";
        case 74:
            return L"Pure Power";
        case 75:
            return L"Shell Armor";
        case 76:
            return L"Cacophony";
        case 77:
            return L"Air Lock";
        default:
            return L"Glitch " + to_wstring(ability);
    }
}

// Sets the data for a pokemon data class.
void PokemonData::SetData(ifstream &fileInput) {

    // Get the pokemon species data from the file stream. Used this as reference:
    // https://bulbapedia.bulbagarden.net/wiki/Pok%C3%A9mon_species_data_structure_(Generation_III)
    fileInput >> hex >> HP >> Atk >> Def >> Spe >> SpA >> SpD >> Type1 >> Type2 >> CatchRate >> ExpYield >> EVYieldHigh;
    fileInput >> hex >> EVYieldLow >> Item1Low >> Item1High >> Item2Low >> Item2High >> Gender >> EggCycle
              >> Friendship;
    fileInput >> hex >> ExpCurve >> Egg1 >> Egg2 >> Ability1 >> Ability2 >> SafariRate >> ColorAndFlip;
    fileInput >> hex >> PaddingHigh >> PaddingLow;
    // The items are two bytes long. Multiply high byte by 0x100 and add it to low byte to get resulting item index.
    Item1 = 0x100 * Item1High + Item1Low;
    Item2 = 0x100 * Item2High + Item2Low;
    Padding = 0x100 * PaddingHigh + PaddingLow;
}

void PokemonData::SetIndex(int Index) {
    this->Index = Index;
}
// Returns a vector of stats.
vector<unsigned int> PokemonData::GetStats() {
    // create a vector with the stats input. I have them arranged in a more logical order than how it is in the actual
    // pokemon data structure.
    return {HP, Atk, Def, SpA, SpD, Spe};
}

// Returns the abilities.
vector<unsigned int> PokemonData::GetAbilities() {
    return {Ability1, Ability2};
}

// Returns the primary and secondary typing number.
vector<unsigned int> PokemonData::GetTypings() {
    return {Type1, Type2};
}

void PokemonData::PrintStats() {
    // Print out the most important information.

    // If both typings are the same, it's just output as a single typing.
    if (Type1 == Type2) {
        wcout << "Typing        : " << GetTypingName(Type1) << endl;
    }
    else {
        // If they're different, print out both.
        wcout << "Typing        : " << GetTypingName(Type1) << ", " << GetTypingName(Type2) << endl;
    }

    wcout << "HP            : " << setw(3) << right << dec << HP << endl;
    wcout << "Atk           : " << setw(3) << right << dec << Atk << endl;
    wcout << "Def           : " << setw(3) << right << dec << Def << endl;
    wcout << "SpA           : " << setw(3) << right << dec << SpA << endl;
    wcout << "SpD           : " << setw(3) << right << dec << SpD << endl;
    wcout << "Spe           : " << setw(3) << right << dec << Spe << endl;
    wcout << "Ability 1     : " << GetAbilityName(Ability1) << endl;
    wcout << "Ability 2     : " << GetAbilityName(Ability2) << endl;

}
unsigned int PokemonData::GetBST() {
    return HP + Atk + Def + SpA + SpD + Spe;
}
// Helper function for PrintMisc, gets egg group name from egg group index.
wstring PokemonData::GetEggGroupName(unsigned int eggGroup) {
    switch(eggGroup) {
        case 1:
            return L"Monster";
        case 2:
            return L"Water 1";
        case 3:
            return L"Bug";
        case 4:
            return L"Flying";
        case 5:
            return L"Field";
        case 6:
            return L"Fairy";
        case 7:
            return L"Grass";
        case 8:
            return L"Human-Like";
        case 9:
            return L"Water 3";
        case 10:
            return L"Mineral";
        case 11:
            return L"Amorphous";
        case 12:
            return L"Water 2";
        case 13:
            return L"Ditto";
        case 14:
            return L"Dragon";
        case 15:
            return L"Undiscovered";
        default:
            return L"Glitch " + to_wstring(eggGroup);

    }
}

// Helper function for PrintMisc, gets exp curve name from exp curve index.
wstring PokemonData::GetCurveName(unsigned int curve) {
    switch(curve) {
        case 0:
            return L"Medium Fast";
        case 1:
            return L"Erratic";
        case 2:
            return L"Fluctuating";
        case 3:
            return L"Medium Slow";
        case 4:
            return L"Fast";
        case 5:
            return L"Slow";
        default:
            return L"Glitch " + to_wstring(curve);
    }
}

// Print out less important but still interesting information.
void PokemonData::PrintMisc() {

    /*wcout << "Catch rate    : " << dec << CatchRate << endl;
    wcout << "Base EXP Yield: " << dec << ExpYield << endl;*/
    // EV Yield is a bit more complicated and does binary stuff (and really isn't that important)
    // so im gonna leave that for later.
    // wcout << "Effort Yield  : " << dec << ..
    wcout << "Item 1 Index  : 0x" << hex << Item1 << endl;
    wcout << "Item 2 Index  : 0x" << hex << Item2 << endl;
    wcout << "EXP Curve     : " << GetCurveName(ExpCurve) << endl;
    if (Egg1 != Egg2) {
        // If the egg groups are the same, just output one.
        wcout << "Egg Group     : " << GetEggGroupName(Egg1) << ", " << GetEggGroupName(Egg2) << endl;
    }
    else {
        // If they're different output both.
        wcout << "Egg Group     : " << GetEggGroupName(Egg1) << endl;
    }


}

bool PokemonData::IsTypingStable(unsigned int type) {
    /* I did research in the past to see which typings were stable. Messy but only way I could think of putting it in
     * here without having 256 cases. */

    if ((type <= 22) || (type == 26) || (type >= 31 && type <= 35) || (type >= 59 && type <= 68) || (type == 74)
        || (type >= 95 && type <= 101) || (type == 107) || (type == 127) || (type == 134) || (type == 141) || (type == 148)
        || (type == 169) || (type == 187) || (type == 188) || (type == 196) || (type == 200) || (type == 223)) {
        return true;
    }
    else return false;
}

