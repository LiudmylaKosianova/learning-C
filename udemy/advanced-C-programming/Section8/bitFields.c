#include <stdio.h>

struct packed_struckt{
    
    char c;
        
    unsigned int : 3;//padding, we don't need these bits
    unsigned int f1: 1; //one bit to store true/false information in the flag
    unsigned int f2: 1;
    unsigned int f3: 1;
    unsigned int type: 8;//8 bits for type data from 0 to 255
    unsigned int index: 18;//18 bits for index data from 0 to 100 000

};

int main(){

    struct packed_struckt packed_data;
    packed_data.type = 7;//set type to be 7


    return 0;

}
 