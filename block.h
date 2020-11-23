#ifndef BLOCK_H
#define BLOCK_H
#include <string>
#include "sha256.h"
#include <time.h>
#include<stdio.h>
#include<sstream>

class block
{
    public:

        std::string b_data; // blockchain data
        void display();
        void intialize(std::string ledger);
        std::string calculateHash(std::string compute);
        std::string total_hash;// a complete hash of the total ledger
        std::string mined_hash;// hash of the mined block
        void Mined_Block(uint32_t difficulty);


    protected:






    private:
            std::stringstream ss;
            uint32_t nonce = 1;// a inital value selected for the purpose of the mine function
            clock_t s,e; // variables used to indicate time taken to mine
            double cpu_time_used;
};

#endif // BLOCK_H
