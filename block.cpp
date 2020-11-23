#include "block.h"
#include "sha256.h"

block::block(std::string inp, uint32_t index)// creating an element or a block
{
 nonce = 2;
 b_time = std::time(nullptr) // using current time as part of the block
}

std::string gethash(std::string h_data)//returns hash of any data in a string format
{
   return sha256(h_data);
}
block::~block()
{
    //dtor
}
