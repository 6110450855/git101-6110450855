#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name1 ;
   int level1 ;
   cin >> name1 ;
   cin >> level1 ;
   
   Hero hero(name1,level1) ;
   cout << hero.getName() << ' ' << hero.getLevel() << endl ; 

}