#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char *argv[])
{
    
    string str;
    
    while(1){
             
        cout << "\n3 harfden buyuk sadece a ve b iceren string gir ";
        getline (cin, str);
        
        // sondan 3üncü karakter
        int last3 =  str.size() - 3;
        
        // language dogruysa
        int okay = 1;
        
        // 1 a
        if( str[last3] == 'a'){
        
            // 2 a
            if ( str[last3 + 1 ] == 'a' ){
               
               // 3 a (ok)
               if ( str[last3 + 2 ] == 'a' ){
                  okay=1;     
               }
               // 3 b (ok)
               else if (str[last3 + 2 ] == 'b' ) { 
                    okay = 1; 
               }
            
            }
            // 2 b
            if ( str[last3 + 1 ] == 'b' ){
               
               // 3 a (not ok)
               if ( str[last3 + 2 ] == 'a' ){
                  okay=0;     
               }
               //3 b (ok)
               else if ( str[last3 + 2 ] == 'b' ) {
                  okay=1;
               }
            
            }
        }
        // 1 b (not)
        else if ( str[last3 + 2 ] == 'b' ){   
          okay=0;
        }
        
        
        
        // dogruysa yaz
        if( okay == 1){
           cout << "Dogru\n";
        }
        else {
           cout << "yanlis\n";
             }
        
   }
    system("PAUSE");
    return EXIT_SUCCESS;
}
