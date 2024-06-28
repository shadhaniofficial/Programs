#include <stdio.h>
#include <string.h>

void lower(char* string);
int Common(char* name1, char* name2);
void Shift(char* word);


int main(){
   
    char name1[50];       //Enter the name1
    char name2[50];       //Enter the name2
    
    printf("Enter the First person name: ");
    scanf("%s",name1);
    lower(name1);
    printf("Enter the Second person name: ");
    scanf("%s",name2);
    lower(name2);
    
    int count = Common(name1, name2);
   
    char flames[] = "flames_";
    Shift(flames);
    int position = 0;
   
    for (int i=0; i<5; i++){
        for (int j=0; j<count; j++){
            if (flames[position] == '_'){
                position = 0;
            }
            position++;
        }
        position--;
        flames[position] = ' ';
        Shift(flames);
    }


    switch (flames[0]){
        case 'f':   printf("Friends");      break;
        case 'l':   printf("Love");         break;
        case 'a':   printf("Affection");    break;
        case 'm':   printf("Marriage");     break;
        case 'e':   printf("Enemy");        break;
        case 's':   printf("Sister");       break;
        default:    printf("Try Again");    break;
    }
    return 0;
   
}


int Common(char* name1, char* name2){
   
    int l1 = strlen(name1);
    int l2 = strlen(name2);
    int count = l1 + l2;
   
    for (int i=0; i<l1; i++){
        for (int j=0; j<l2; j++){
            if (name1[i] == name2[j]){
                name1[i] = ' ';
                name2[j] = ' ';
                count -= 2;
                break;
            }
        }
    }
   
    return count;
}


void Shift(char* word){
   
    int len = strlen(word);
   
    for (int i=0; i<len-1; i++){
        if (word[i] == ' '){
            for (int j=i; j<len-1; j++){
                word[j] = word[j+1];
            }
        }
    }
   
}

void lower(char* string){
    
    int l = strlen(string);
    
    for (int i=0; i<l; i++){
      if (string[i] >= 'A' && string[i] <= 'Z'){
        string[i] ^= 32;
      }
    }
}
