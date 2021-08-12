
#ifndef FINALPROJECT_POKEMONDATA_H
#define FINALPROJECT_POKEMONDATA_H

#include <vector>
#include <fstream>

using namespace std;
class PokemonData {
public:
    void SetData(ifstream &fileName);
    void SetIndex(int Index);
    vector<unsigned int> GetStats();
    unsigned int GetBST();
    vector<unsigned int> GetTypings();
    vector<unsigned int> GetAbilities();
    void PrintStats();
    void PrintMisc();
    PokemonData();
    bool IsTypingStable(unsigned int type);
    unsigned int ExpYield;
    unsigned int ExpCurve;
private:
    int Index;
    unsigned int HP;
    unsigned int Atk;
    unsigned int Def;
    unsigned int Spe;
    unsigned int SpA;
    unsigned int SpD;
    unsigned int Type1;
    unsigned int Type2;
    unsigned int CatchRate;

    unsigned int EVYieldHigh;
    unsigned int EVYieldLow;
    unsigned int Item1;
    unsigned int Item1High;
    unsigned int Item1Low;
    unsigned int Item2;
    unsigned int Item2High;
    unsigned int Item2Low;
    unsigned int Gender;
    unsigned int EggCycle;
    unsigned int Friendship;

    unsigned int Egg1;
    unsigned int Egg2;
    unsigned int Ability1;
    unsigned int Ability2;
    unsigned int SafariRate;
    unsigned int ColorAndFlip;
    unsigned int Padding;
    unsigned int PaddingHigh;
    unsigned int PaddingLow;
    wstring GetTypingName(unsigned int typeIndex);
    wstring GetAbilityName(unsigned int ability);
    wstring GetEggGroupName(unsigned int eggGroup);
    wstring GetCurveName(unsigned int curve);


};


#endif //FINALPROJECT_POKEMONDATA_H
