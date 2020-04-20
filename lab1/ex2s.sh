#!/bin/bash
    
    echo "#include <stdio.h>"
    echo "#include <unistd.h>"
    echo "#include <limits.h>"
    
    echo "int main(void) {"
    # Trik z (void) r ignoruje warning kompilatora o nieużytej zmiennej
    echo "  long r; (void)r;"
    
    for i in `cat sysconf.list.txt | grep _SC`
    do

        S=$(echo "$i" | tr -d '\n' | tr -d '\r')
        [ -z "$S" ] && continue
	echo '  #ifdef '$i
        echo "      r = sysconf($S);"
        echo "      printf(\"The value of $S is %ld\\n\", r);"
        echo "  #else"
        echo "      printf(\"The $S is undefined.\\n\");"
        echo "  #endif"
    done
    
    echo "return 0;"
    echo "}"
