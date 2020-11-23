## Overview
The purpose of this program was to have a look at the mining time for a block. For the purposes of this program the block is considered to be ledger entries by the user.The program
also stores the hash of the induviudal ledger entries as well as the hash of the combined ledger entries in files and writes them out for the user to view. Its a simple implementation
to understand C++ functions as well as some rudiments of blockchain

## Dependencies 
No dependencies here. Just using the GNU GCC compilier. I have used the Zedwood implementation of SHA256 as the hashing algorithm and have included the files as well as the licence
with this project

## How to run and output
The below 2 commands should run the code
g++ block.cpp main.cpp sha256.cpp
./a.out

Upon entering the ledger details the following output will show ( The ledger is terminated when the user inputs "END"). The hash of the induvidual user entries and the total hash 
used for mining will be saved as .txt files



![image](https://user-images.githubusercontent.com/15147358/99946879-1c216c80-2d9d-11eb-891a-7e072db6882a.png)
