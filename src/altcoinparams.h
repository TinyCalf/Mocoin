/*
definitions below is now params for altcoin Tcash .
this file will be overwrite through some script to switch to other altcoins
definitions below has replaced params in :
chainparams.cpp,
consensus/consensus.h
main.cpp
util.h
*/
#ifndef BITCOIN_ALTCOINPARAMS_H
#define BITCOIN_ALTCOINPARAMS_H
/*
common
*/
const static char* TIME_STAMP =  "Chester Bennington committed suicide on 20th July., 2017";
const static char* PUBLIC_KEY = "04678afdb0fe5548271967f1a67130b7105cd6a828e03909a67962e0ea1f61deb649f6bc3f4cef38c4f35504e51ec112de5c384df7ba0b8d578a4c702b6bf11d5f";

/*
Main Net
*/

/*chainparams.cpp*/
const static int HALVING_INTERVAL =  100;
const static int POW_TARGET_TIMESPAWN = 60 * 60 * 24 * 356 ;
const static int POW_TARGET_SPACING = 2 * 60;
const static bool POW_ALLOW_MIN_DIFFICULTY_BLOCKS = true;
const static int MESSAGE_START_0 = 0x90;
const static int MESSAGE_START_1 = 0x0d;
const static int MESSAGE_START_2 = 0x23;
const static int MESSAGE_START_3 = 0x34;
const static int DEFAULT_PORT = 19939;
const static int NTIME =  1500501600;
const static int NNOUNCE = 1065607915;
const static int NBITS = 0x1e00ffff;
const static int NREWORD = 100;
const static char* HASH_GENESIS_BLOCK = "0x000000ceff2fd2bfde81020afa84ea6f52fc37cc3b764785908e31aa16ce5568";
const static char* HASH_MERKLE_ROOT = "0x73fa1ad6feb743057cd613e47c62d0e909d880f7ab83a6a7e31d68a47a399462";
/*TODO: DNSSEEDS*/
const static int PUBKEY_ADDRESS = 44;
const static int SCRIPT_ADDRESS = 54;
const static int SECRET_KEY = 66;
const static bool MINING_REQUIRES_PEERS = false;
const static char* POW_LIMIT = "0x000000ffffffffffffffffffffffffffffffffffffffffffffffffffffffffff";
/*TODO: CHECKPOINTS*/

/*consensus/consensus.h*/
const static int ALT_COINBASE_MATURITY =3;

/*main.cpp*/
const static int REWORD_OF_MINING = 270000;

/*util.h*/
// directory name  named after the altcoin
const static char* DATA_FILE_NAME =  "Tcash";
const static char* DATA_FILE_NAME_UNIX =  ".tcash";

/*TODO:qt default data path*/

#endif // BITCOIN_ALTCOINPARAMS_H