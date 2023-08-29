config:
	gcc -Wall -Werror -std=c11 -c config.c
configtest:
	gcc -Wall -Werror -std=c11 -o config config.c
driver:
	config
	gcc -Wall -Werror -std=c11 -o storageManager driver.c
cleanConfig:
	rm rsc/config.csv
	rm config
	rm config.o
	rm storageManager
cleanDriver:
	rm cleanConfig
	rm storageManager
clean:
	cleanConfig
	cleanDriver
	
