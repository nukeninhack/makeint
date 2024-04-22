    #include <stdio.h>
    #include <stdlib.h>
        int main(int argc, char *argv[]){
        	if(argc < 3){
    	        printf("use: ./makeint <MIN/MAX> <MIN/MAX> <WORDLIST.txt>\n");
    	        exit(1);
    	
    	    }
    	    char buf[256];
    	    long long int input = atoi(argv[1]);
    	    long long int output = atoi(argv[2]);
    	    FILE *f = fopen(argv[3], "w");
    	    if(f == NULL){
    	        printf("Você tem permisão para criar arquivos aqui?\n");
    	        exit(1);
    	    }
    	    if(input < output){
    		    for(; input < output + 1; input++){
    			    fprintf(f, "%lld\n", input);
    		    }
    	    }
    	    else if(input > output){
                for(; input > output; input--){
    				fprintf(f, "%lld\n", input);
    			}
    		}
            fclose(f);
    		printf("Wordlist ok!\nBoa sorte!\n");
    		
        
            return 0;

    	}
