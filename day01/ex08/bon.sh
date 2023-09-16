ldapsearch -Q "(sn=*BON*)" sn | grep ^sn: | wc -l | bc
