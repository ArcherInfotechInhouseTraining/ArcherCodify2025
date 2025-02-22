#include "queen_attack.h"
#include <stdlib.h>  

#define SIZE 8

attack_status_t can_attack(position_t white_queen, position_t black_queen)
{
    
    if (white_queen.row >= SIZE || white_queen.column >= SIZE ||
        black_queen.row >= SIZE || black_queen.column >= SIZE) {
        return INVALID_POSITION;
    }

    
    if (white_queen.row == black_queen.row && white_queen.column == black_queen.column) 
    {
        return INVALID_POSITION;
    }

    
    if (white_queen.row == black_queen.row || white_queen.column == black_queen.column)
    {
        return CAN_ATTACK;
    }

    
    if (abs((int)white_queen.row - (int)black_queen.row) == abs((int)white_queen.column - (int)black_queen.column)) 
    {
        return CAN_ATTACK;
    }

    
    return CAN_NOT_ATTACK;
}
