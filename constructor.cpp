#include <bits/stdc++.h>
using namespace std;

enum mealType{
    NO_PREF, REGULAR, LOW_FAT, VEGETARIAN
};

class Passenger{
    string name;
    mealType meal_pref;
    bool isFreqFlyer;
    string freFlyerNo;
    public :
    Passenger();
    Passenger(const string &nm, mealType mp, const string &ffn = "NONE");
    Passenger(const Passenger &pass);
};

Passenger :: Passenger(){
    name = "NO_NAME";
    meal_pref = NO_PREF;
    isFreqFlyer = false;
    freFlyerNo = "NONE";
}

Passenger :: Passenger(const string &nm, mealType mp, const string &ffn){
    name = nm;
    meal_pref = mp;
    isFreqFlyer = (ffn != "NONE");
    freFlyerNo = ffn;
}

Passenger :: Passenger(const Passenger &pass){
    name = pass.name;
    meal_pref = pass.meal_pref;
    isFreqFlyer = pass.isFreqFlyer;
    freFlyerNo = pass.freFlyerNo;
}

int main()
{
    Passenger p1;
    Passenger p3("Pocahontas", REGULAR);
    Passenger p4(p3);
    Passenger p5 = p3;
    cout << p1;
    return 0;
}