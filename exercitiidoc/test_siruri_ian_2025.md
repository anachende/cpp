# Enunt
![image](https://github.com/user-attachments/assets/7c2cd0ba-d7eb-47a2-bd28-18b10178ad66)

# Rezolvare

      #include <iostream>
      #include <string.h>
      using namespace std;
      int main() {
          char s[20];
          int n=0,i;
          for(i=1;i<=11;i++){
              cin>>s;
               if(strlen(strstr(s,"are"))==3)n++;
          }
       
          return 0;
      }
