#include <iostream>
#include "block.h"
#include <vector>
#include <fstream>


using namespace std;


int main()
{
ofstream output_file;
std::vector <std::string> ledgerEntries;
std::string entry;
block newblock;
while (entry!="END")
{
std::cout << "Enter the sample ledger data" << std::endl;
getline(std::cin,entry);
ledgerEntries.push_back(entry);
}
for (auto& it : ledgerEntries)
{
if (it == "END")
{
newblock.display(); // display contents of the ledger can comment out if needed
newblock.total_hash = newblock.calculateHash(newblock.b_data);
output_file.open("Hash of all transcations.txt");
output_file << newblock.total_hash <<std::endl;
newblock.Mined_Block(ledgerEntries.size()-1);
exit(0);
}
else
{

newblock.intialize(it);
output_file.open("InduvidualTranscatHash " +it+ ".txt");
output_file << newblock.calculateHash(it)<<std::endl;
output_file.close();

}

}










}
