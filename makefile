config:
	gcc -Wall -Werror -std=c11 -c config.c
configtest:
	gcc -Wall -Werror -std=c11 -o config config.c
driver:
	gcc -Wall -Werror -std=c11 -o storageManager driver.c 
clean:
	rm rsc/config.csv
	rm config
	rm config.o
	rm storageManager
