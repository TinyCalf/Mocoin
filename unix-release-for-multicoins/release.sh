#!/bin/bash - 
#===============================================================================
#
#          FILE: release.sh
# 
#         USAGE: ./release.sh 
# 
#   DESCRIPTION: 
# 
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: Jonathan (Admin), 839560084@qq.com
#  ORGANIZATION: Tiny Calf
#       CREATED: 2017年08月03日 13时02分08秒
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error

answer=3
while [[ ${answer} =~ [^12] ]]   ; do
	echo "this bash can be used now only if you are sure what coin is the core code now!"
	echo "now you can choose what you need to release for unix:"
	echo "1. Mobicoin"
	echo "2. Tcash"
	read answer
	if [[ ${answer} =~ [^12] ]] ; then
		echo "Input is not correct! Please try again."
	fi
done

name="null"
if [[ $answer == 1 ]] ; then
	name=mobicoin
else	
	name=tcash
fi

echo "copying template..." && \
cp -rf ./template ./rls-${name} &&\
cp -rf ../src/bitcoind ./rls-${name}/bin/${name}d &&\
cp -rf ../src/bitcoin-cli ./rls-${name}/bin/${name}-cli &&\
zip -r rls-${name}-`date --iso-8601`.zip ./rls-${name}/ && \
echo "succeed release ${name}!"



