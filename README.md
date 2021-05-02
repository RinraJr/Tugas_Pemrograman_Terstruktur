
//# Tugas_Pemrograman_Terstruktur

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int rows = 15, cols = 16;

char words[rows][cols]{
   						"tgbwwinterwsesn",
  						"aaunttmmhfoodnb",
   						"jlwcqldzmpmvdmr",
   						"asagmquwvvbsohi",
    					"bwplotanadtpgnc",
    					"rewngodjcpnatnk",
    					"eeotwosbqharrsa",
    					"azcgeswewnaknpb",
    					"dinnerqodlwdcar",
    					"onopkwmparktzcc",
    					"qbfrogmamwpweey",
    					"lqzqnnmrzjjsclg",
    					"mosgzczetdbooto",
    					"pdcrzmsngrdnrpz",
    					"ohnkzwaterjgtra".
};

char *getWordDiagonal(int row,int col);
char *getWordVertical(int row,int col);
char *getWordHorizontal(int row,int col);
char *reverse(char *);
bool searchDiagonal(char *str);
bool searchVertical(char input[]);
bool searchHorizontal(char input[]);


int main(){
	
    int n;
    char word[16];
    cin >> n;
    cin.ignore(n,'\n');
    
	for (int i=0; i<n; i++){
        cin.getline(word,16,'\n');
        if (searchDiagonal(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    return 0;
}

char *reverse(char *a){
    //Buat fungsi untuk membalik string yang dimasukkan oleh user
    char *s = a;
	reverse(s,s+(int) strlen(a));
	return s;
}

