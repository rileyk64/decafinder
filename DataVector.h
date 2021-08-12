
#include <string>
#include <vector>
#include "PokemonData.h"
using namespace std;

#ifndef FINALPROJECT_DATAVECTOR_H
#define FINALPROJECT_DATAVECTOR_H


class DataVector {
public:
    void SetData(const string& filename);
    void PrintDataAtIndex(int index);
    void PrintName(int index);
    void SetNames(const string& filename);
    void SetAbilityNames(const string& filename);
    void SetDexNums(const string& filename);
    void SetAnims(const string& filename1, const string& filename2);
    void SetCries(const string& crydata);
    void PrintLargest();
    vector<bool> GetPokemonWithAbility1(unsigned int AbilityID, unsigned int minID, unsigned int maxID);
    vector<bool> GetPokemonWithAbility2(unsigned int AbilityID, unsigned int minID, unsigned int maxID);
    vector<bool> GetPokemonWithTyping(unsigned int type1, unsigned int type2, unsigned int minID, unsigned int maxID);
    vector<bool> GetPokemonWithTyping1(unsigned int type1, unsigned int minID, unsigned int maxID);
    vector<bool> GetPokemonWithTyping2(unsigned int type2, unsigned int minID, unsigned int maxID);
    vector<bool> GetPokemonWithBST(unsigned int bst, unsigned int minID, unsigned int maxID);
    vector<bool> GetStablePokemon(unsigned int minID, unsigned int maxID);
    vector<PokemonData> dataVector;
    vector<int> dexNums;
    vector<wstring> names;
    vector<wstring> abilitynames;
    vector<unsigned int> AnimIDs;
    vector<unsigned int> AnimAddresses;
    vector<unsigned int> pokeCries;

private:

    vector<unsigned int> NameCharacterVec;
    vector<unsigned int> AbilityNameCharacterVec;

    wchar_t CharacterEncoder(int index);

};


#endif //FINALPROJECT_DATAVECTOR_H
