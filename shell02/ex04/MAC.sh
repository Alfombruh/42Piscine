 ifconfig | grep ether | tr 'ether' '   ' | sed -e "s/ //g"
