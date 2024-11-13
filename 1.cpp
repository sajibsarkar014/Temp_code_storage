#include<stdio.h>
#include<string.h>
#include<ctype.h>

void caseTolower(char* input){
	int k = strlen(input);
	int m=0;
	while(m<k){
		input[m] = tolower(input[m]);
	}
}
void caseChanger(char* input){
    int k = strlen(input);
    int m=0;
    while(m<k){
        if(input[m]<'a'){
            input[m]+= 32;
        }
        else{
            input[m]-=32;
        }
        m++;
    }
}
void caseSetter(char * input){
    int m= 1;
    while(1<strlen(input)){
        input[m] +=32;
    }
    m++;
}

int main(){
    char str[101];
    fgets(str,sizeof(str),stdin);

    int l=0;
    while(l<101){
        if(str[l] == '\n'){
            str[l] = '\0';
        }
        l++;
    }

    // int k = strlen(str);

   
    if(islower(str[0])){ 
        int m =1;
        for(int i =1; i< strlen(str);i++){
            if((str[i]<'A' || str[i]>'Z')&& str[i]!= '\0'){
                m=0;
                break;
            }
        }
        if(m==1){
            caseChanger(str);
        } 
    }
    else if(isupper(str[0])){
        int m=1;
        for(int i =1; i< strlen(str);i++){
            if(!(isupper(str[i]))&& str[i]!= '\0'){

                m=0;
                break;
            }
        }
        if(m==1){
            caseSetter(str);
        } 
    }


    

    printf("%s",str);
    
}