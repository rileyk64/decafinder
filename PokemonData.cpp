
#include "PokemonData.h"
#include <iostream>
#include <iomanip>

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
string PokemonData::GetTypingName(unsigned int typeIndex) {
    // Uses this as reference: https://bulbapedia.bulbagarden.net/wiki/Type_chart_data_structure_(Generation_III)
    switch (typeIndex) {
        case 0:
            return "Normal";
        case 1:
            return "Fighting";
        case 2:
            return "Flying";
        case 3:
            return "Poison";
        case 4:
            return "Ground";
        case 5:
            return "Rock";
        case 6:
            return "Bug";
        case 7:
            return "Ghost";
        case 8:
            return "Steel";
        case 9:
            return "???";
        case 10:
            return "Fire";
        case 11:
            return "Water";
        case 12:
            return "Grass";
        case 13:
            return "Electric";
        case 14:
            return "Psychic";
        case 15:
            return "Ice";
        case 16:
            return "Dragon";
        case 17:
            return "Dark";
        case 18:
            return "Cool";
        case 19:
            return "Beauty";
        case 20:
            return "Cute";
        case 21:
            return "Smart";
        case 22:
            return "Tough";
        default:
            string Glitch = "Glitch " + to_string(typeIndex);

            return Glitch;
    }
}
// Takes in an ability index number and outputs a string with the name of the ability.
string PokemonData::GetAbilityName(unsigned int ability) {
    // Using this article as a guide. https://bulbapedia.bulbagarden.net/wiki/Ability#List_of_Abilities

    switch(ability) {
        case 0:
            return "No ability";
        case 1:
            return "Stench";
        case 2:
            return "Drizzle";
        case 3:
            return "Speed Boost";
        case 4:
            return "Battle Armor";
        case 5:
            return "Sturdy";
        case 6:
             return "Damp";
        case 7:
            return "Limber";
        case 8:
            return "Sand Veil";
        case 9:
            return "Static";
        case 10:
            return "Volt Absorb";
        case 11:
            return "Water Absorb";
        case 12:
            return "Oblivious";
        case 13:
            return "Cloud Nine";
        case 14:
            return "Compound Eyes";
        case 15:
            return "Insomnia";
        case 16:
            return "Color Change";
        case 17:
            return "Immunity";
        case 18:
            return "Flash Fire";
        case 19:
            return "Shield Dust";
        case 20:
            return "Own Tempo";
        case 21:
            return "Suction Cups";
        case 22:
            return "Intimidate";
        case 23:
            return "Shadow Tag";
        case 24:
            return "Rough Skin";
        case 25:
            return "Wonder Guard";
        case 26:
            return "Levitate";
        case 27:
            return "Effect Spore";
        case 28:
            return "Synchronize";
        case 29:
            return "Clear Body";
        case 30:
            return "Natural Cure";
        case 31:
            return "Lightning Rod";
        case 32:
            return "Serene Grace";
        case 33:
            return "Swift Swim";
        case 34:
            return "Chlorophyll";
        case 35:
            return "Illuminate";
        case 36:
            return "Trace";
        case 37:
            return "Huge Power";
        case 38:
            return "Poison Point";
        case 39:
            return "Inner Focus";
        case 40:
            return "Magma Armor";
        case 41:
            return "Water Veil";
        case 42:
            return "Magnet Pull";
        case 43:
            return "Soundproof";
        case 44:
            return "Rain Dish";
        case 45:
            return "Sand Stream";
        case 46:
            return "Pressure";
        case 47:
            return "Thick Fat";
        case 48:
            return "Early Bird";
        case 49:
            return "Flame Body";
        case 50:
            return "Run Away";
        case 51:
            return "Keen Eye";
        case 52:
            return "Hyper Cutter";
        case 53:
            return "Pickup";
        case 54:
            return "Truant";
        case 55:
            return "Hustle";
        case 56:
            return "Cute Charm";
        case 57:
            return "Plus";
        case 58:
            return "Minus";
        case 59:
            return "Forecast";
        case 60:
            return "Sticky Hold";
        case 61:
             return "Shed Skin";
        case 62:
            return "Guts";
        case 63:
            return "Marvel Scale";
        case 64:
            return "Liquid Ooze";
        case 65:
            return "Overgrow";
        case 66:
            return "Blaze";
        case 67:
            return "Torrent";
        case 68:
            return "Swarm";
        case 69:
            return "Rock Head";
        case 70:
            return "Drought";
        case 71:
            return "Arena Trap";
        case 72:
            return "Vital Spirit";
        case 73:
            return "White Smoke";
        case 74:
            return "Pure Power";
        case 75:
            return "Shell Armor";
        case 76:
            return "Cacophony";
        case 77:
            return "Air Lock";
        default:
            return "Glitch " + to_string(ability);
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
        cout << "Typing        : " << GetTypingName(Type1) << endl;
    }
    else {
        // If they're different, print out both.
        cout << "Typing        : " << GetTypingName(Type1) << ", " << GetTypingName(Type2) << endl;
    }

    cout << "HP            : " << setw(3) << right << dec << HP << endl;
    cout << "Atk           : " << setw(3) << right << dec << Atk << endl;
    cout << "Def           : " << setw(3) << right << dec << Def << endl;
    cout << "SpA           : " << setw(3) << right << dec << SpA << endl;
    cout << "SpD           : " << setw(3) << right << dec << SpD << endl;
    cout << "Spe           : " << setw(3) << right << dec << Spe << endl;
    cout << "Ability 1     : " << GetAbilityName(Ability1) << endl;
    cout << "Ability 2     : " << GetAbilityName(Ability2) << endl;

}
unsigned int PokemonData::GetBST() {
    return HP + Atk + Def + SpA + SpD + Spe;
}
// Helper function for PrintMisc, gets egg group name from egg group index.
string PokemonData::GetEggGroupName(unsigned int eggGroup) {
    switch(eggGroup) {
        case 1:
            return "Monster";
        case 2:
            return "Water 1";
        case 3:
            return "Bug";
        case 4:
            return "Flying";
        case 5:
            return "Field";
        case 6:
            return "Fairy";
        case 7:
            return "Grass";
        case 8:
            return "Human-Like";
        case 9:
            return "Water 3";
        case 10:
            return "Mineral";
        case 11:
            return "Amorphous";
        case 12:
            return "Water 2";
        case 13:
            return "Ditto";
        case 14:
            return "Dragon";
        case 15:
            return "Undiscovered";
        default:
            return "Glitch " + to_string(eggGroup);

    }
}

// Helper function for PrintMisc, gets exp curve name from exp curve index.
string PokemonData::GetCurveName(unsigned int curve) {
    switch(curve) {
        case 0:
            return "Medium Fast";
        case 1:
            return "Erratic";
        case 2:
            return "Fluctuating";
        case 3:
            return "Medium Slow";
        case 4:
            return "Fast";
        case 5:
            return "Slow";
        default:
            return "Glitch " + to_string(curve);
    }
}

// Print out less important but still interesting information.
void PokemonData::PrintMisc() {

    /*cout << "Catch rate    : " << dec << CatchRate << endl;
    cout << "Base EXP Yield: " << dec << ExpYield << endl;*/
    // EV Yield is a bit more complicated and does binary stuff (and really isn't that important)
    // so im gonna leave that for later.
    // cout << "Effort Yield  : " << dec << ..
    cout << "Item 1 Index  : 0x" << hex << Item1 << endl;
    cout << "Item 2 Index  : 0x" << hex << Item2 << endl;
    cout << "EXP Curve     : " << GetCurveName(ExpCurve) << endl;
    if (Egg1 != Egg2) {
        // If the egg groups are the same, just output one.
        cout << "Egg Group     : " << GetEggGroupName(Egg1) << ", " << GetEggGroupName(Egg2) << endl;
    }
    else {
        // If they're different output both.
        cout << "Egg Group     : " << GetEggGroupName(Egg1) << endl;
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

