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
const static char* TIME_STAMP =  "Chester Bennington committed suicide on 20th July., 2017"; //随机的一句话，换个别的随便什么都行
const static char* PUBLIC_KEY = "04678afdb0fe5548271967f1a67130b7105cd6a828e03909a67962e0ea1f61deb649f6bc3f4cef38c4f35504e51ec112de5c384df7ba0b8d578a4c702b6bf11d5f";//不用改

/*
Main Net
*/

/*chainparams.cpp*/
const static int HALVING_INTERVAL =  100; //减半周期，就是每过100个块，每个块的产出就减半
const static int POW_TARGET_TIMESPAWN = 60 * 60 * 24 * 356 ; //目标难度调整周期
const static int POW_TARGET_SPACING = 2 * 60; // 目标出块时间
const static bool POW_ALLOW_MIN_DIFFICULTY_BLOCKS = false; //是否允许最小难度，这个不用改
const static int MESSAGE_START_0 = 0x90; // 这四个都是消息头，随便写就行，用于与其他币种的网络区分开，这个信息还会用到Bitcore的钱包服务器里
const static int MESSAGE_START_1 = 0x0d; //
const static int MESSAGE_START_2 = 0x23; //
const static int MESSAGE_START_3 = 0x34; //
const static int DEFAULT_PORT = 19939; //默认端口

const static int NTIME =  1500501600; //创建该币种的时间，大致时间戳就行，用来告诉系统多久没更新了
const static int NNOUNCE = 57739874; //由创世块算法计算出来的随机数
const static int NBITS = 0x1d0fffff; //初始挖矿难度
const static int NREWORD = 100; //每个块的奖励，100个Tcash
const static char* HASH_GENESIS_BLOCK = "0x000000099d7c18fee4c186a9f508d313171bb5a0072aa5114eda626a804e85aa"; //通过挖矿算法计算出来的创世块hash值
const static char* HASH_MERKLE_ROOT = "0x73fa1ad6feb743057cd613e47c62d0e909d880f7ab83a6a7e31d68a47a399462";//通过挖矿算法计算出来的创世块merkleroot
/*DNSSEEDS*/
//const static char*DNSSEEDS1= "120.92.35.170";
//const static char*DNSSEEDS2="120.92.35.170";

const static int nPUBKEY_ADDRESS = 44; //以下三个参数是生成地址的时候带的参数，用于吧当前币的地址和其他币的地址区分开，随便设置三个数就行，同样这个信息还会用到Bitcore的钱包服务器里
const static int nSCRIPT_ADDRESS = 54;
const static int nSECRET_KEY = 66;
const static bool MINING_REQUIRES_PEERS = false; //不需要改
const static char* POW_LIMIT = "0x0000000ffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"; //挖矿难度限制，其实也不需要改
/*TODO: CHECKPOINTS*/

/*consensus/consensus.h*/
const static int ALT_COINBASE_MATURITY =3; //块成熟时间，如果设置成100,则挖到的块要在经过100次确认才能到手里

/*main.cpp*/
const static int REWORD_OF_MINING = 251257; //每个块的奖励

/*util.h*/
// directory name  named after the altcoin
const static char* DATA_FILE_NAME =  "Tcash"; //新币的名称
const static char* DATA_FILE_NAME_UNIX =  ".tcash"; //新币在linux上的默认文件夹名称

/*TODO:qt default data path*/

const static int RPC_PORT =  19938; //默认RPC端口名称

#endif // BITCOIN_ALTCOINPARAMS_H
