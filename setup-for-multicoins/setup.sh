#!/bin/bash - 
#===============================================================================
#
#          FILE: setup.sh
# 
#         USAGE: ./setup.sh 
# 
#   DESCRIPTION: 
# 
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: Jonathan (Admin), 839560084@qq.com
#  ORGANIZATION: Tiny Calf
#       CREATED: 2017年08月01日 16时00分57秒
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error

echo "Which coin do you want to switch to? Type the number of it:"
echo "1.Mobicoin"
echo "2.Tcash"
read answer
while [[ ${answer} =~ "[^12]" ]]   ; do
	echo "Input is not correct! Please try again."
	echo "Which coin do you want to switch to? Type the number of it:"
	echo "1.Mobicoin"
	echo "2.Tcash"
	read answer
done
filepath=$(cd "$(dirname "$0")"; pwd)
echo "processing..."

if [[ $answer == 1 ]] ; then
	cp -f ./alticoinparams.h-mobicoin ../src/altcoinparams.h && \
	echo "Succeed switch to Mobicoin!"
else	
	cp -f ./alticoinparams.h-tcash ../src/altcoinparams.h && \
	echo "Succeed switch to Tcash!"
fi


