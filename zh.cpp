#include <string>

using namespace std;

class Eredmeny {

public:
   Eredmeny(unsigned int max, int elert) : max(max), elert(elert) {}
       unsigned max;
       int elert;

};

class Hallgato {
   string neptun;
   Eredmeny zh_eredmeny;

public:
   Hallgato(string neptun, Eredmeny zh_eredmeny) : neptun(neptun), zh_eredmeny(zh_eredmeny) {}

   float get_szazalek() {
       return 100.0f * zh_eredmeny.elert / zh_eredmeny.max;
   }
};
/*
#include <string>

using namespace std;

class Eredmeny {
   unsigned max;
   int elert;

public:
   Eredmeny(unsigned int max, int elert) : max(max), elert(elert) {}

   friend class Hallgato;
};

class Hallgato {
   string neptun;
   Eredmeny zh_eredmeny;

public:
   Hallgato(string neptun, Eredmeny zh_eredmeny) : neptun(neptun), zh_eredmeny(zh_eredmeny) {}

   float get_szazalek() {
       return 100.0f * zh_eredmeny.elert / zh_eredmeny.max;
   }
};
*/
