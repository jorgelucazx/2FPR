    /*
    Desenvolver uma função que, dado um arquivo
    texto, verifique o número de vezes que um
    determinado caracter aparece no arquivo.    
    */

    #include <stdio.h>

    int numChar(char n);

    int main(){

        char n;

        printf("Caracter a ser encontrado a ser encontrado:\n");
        scanf("%c",&n);

        int mostrar = numChar(n);
        printf("Contem %d caracters.\n",mostrar);
        return 0;
    }

    int numChar(char n){

        int count = 0;
        char c;

        FILE *arch;

        arch = fopen("arquivo.txt","r");

        if(arch){
            while (fscanf(arch,"%c",&c) != EOF)
            {
                if(n == c){
                    count++;
                }
                
            }
            
        }
        fclose(arch);
        
        return count;
    }