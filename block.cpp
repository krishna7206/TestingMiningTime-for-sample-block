#include "block.h"
#include <iostream>
void block::intialize(std::string l)
{
 b_data = b_data.append(l);


}
void block::display()
{
 std::cout << b_data << std::endl;
}

std::string block::calculateHash(std::string compute)
{
    return sha256(compute);

}

void block::Mined_Block(uint32_t difficulty)
{
    std::string old_string ;
    std::string check_string = std::string(difficulty - old_string.length(), '0') + old_string;
    s = clock();
    do {
         nonce++;
         ss << nonce;
         mined_hash = block::calculateHash(ss.str());
    } while (mined_hash.substr(0, difficulty) != check_string);

    e = clock();
    cpu_time_used = ((double) (e - s)) / CLOCKS_PER_SEC;
    std::cout << "Time taken to mine a block for a ledger containing " << difficulty << " entries is "  << cpu_time_used << std::endl;
    std::cout << "Hash of mined block which satisfies criteria to be a block is " << mined_hash << std::endl;


}
