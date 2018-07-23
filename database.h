#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite3.h>
#include <stdio.h>
#include <iostream>
#include <sstream>

#define DATABASE_NAME    "blockchain.db"
#define BLOCKCHAIN       "Blockchain"
#define BLOCKCHAIN_HASH  "Hash"
#define BLOCKCHAIN_BLOCK "Block"

class DataBase {
private:
  sqlite3 *db;
  char *err_msg = 0;

  bool openDataBase();

public:
  DataBase();
  std::string getBlock(std::string);
  std::string getHashLastBlock();
  void connectToDataBase();
  void insertToBlockchain(std::string hash, std::string block);
  void closeDataBase();
};


#endif // DATABASE_H
