/**
 * This files is proveded to read a .txt file name "gutenberg.txt"
 *  and select randomly a word 
 * 
 * 
 * **/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"
const char* fr_dico="./gutenberg.txt";
char ** list_of_str;
int dic_is_loaded=-1;
int lireFichier(){
    int count =0;
  
    FILE *fp;
    fp=fopen(fr_dico,"r");
    if(fp == NULL){
        perror("dico file not found ");
        exit(1);
    }
    
    int i=0;
    while(1){

        char* buff=malloc(sizeof(char)*40);
        fgets(buff,40,(FILE*)fp);
        if(feof(fp)){
            dic_is_loaded=1;
            break;
        }
        else{
            count++;
            list_of_str=realloc(list_of_str,count*sizeof(char*));
            if(sizeof(buff) <40){
                list_of_str[i]=buff;
            }
                
            i++;
        }
    }
    fclose(fp);
    
    return dic_is_loaded;
}

char * demandeMot(){
    /**
     * return a word among the dictionnary
     * 
     * 
     * 
     * */
    if(dic_is_loaded==-1){
        int lire=lireFichier();
    }
    
    int rows=sizeof(list_of_str[0]);
    time_t t;
    srand((unsigned) time(&t));
    int pick= rand() % rows + 1;
    return list_of_str[pick];
    
}

int close_dic(){
    /**
    *close the dictionnary and set the value to -1 for the dic loaded value
    *  
    */
    dic_is_loaded=-1;
    free(list_of_str);
    return 0;
}

int main(){
    char * mot=demandeMot();
    printf(mot);
    close_dic();
}

