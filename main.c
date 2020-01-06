#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int str[5];
    int i;
    
    while(fgets(str, sizeof(str), stdin)){
	    
	i=0;
	    
        if (atr[i] < 0 && str[-str[i] - 1] >= 0) {
			printf("%d\n", str[-str[i] - 1]);
		}

		if (str[i] < 0 && str[-str[i] - 1] < 0) {
			printf("%d\n", str[-str[i]]);
		}
	    
    }

    return 0;
}
