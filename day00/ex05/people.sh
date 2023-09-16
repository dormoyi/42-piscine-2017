ldapsearch "cn=Z*" | grep cn: | cut -c5- | sort -r --ignore-case

