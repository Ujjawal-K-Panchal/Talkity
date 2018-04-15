/*
===============================================================================================
Author name : Ujjawal.K.Panchal                                                                 |
Creation Date : 7-10-2017                                                                       |
Language : C++                                                                                  |
Files Included : OBJ files associated , Database.dat , CPP files <optional>.                    |
Completion Date: 8-10-2017                                                                      |
===============================================================================================
*/
#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <time.h>
#include <windows.h>

#define klk231234zA 2

using namespace std;
struct mem
{
            char rol123kdm[100];
            int cobolobfuscationornotin123123_no = 0;
            char cobolobfuscationornotin123123[10][100];
};

int ob123fus1cat098ion(char[], char[], int, int);
int kurzgesagt123(char ch[100] , char ch1[100])
{
    /*
    CUSTOM MADE kurzgesagt123::
    char  kusadg23234[100][100] , kusadg232342[100][100] ;
            int  lkjnnano121333 = 0 , lkjnnano1213332 = 0 ,lkjnnano1213333 = 0;
            float whydoyoueventry = 0;

                        for(int i=0 , k = 0 ;i <= strlen(ch);i++)
                        {
                            if(ch[i] == ' ' || ch[i] == '\0')
                            {
                                for(int j = k , lkjnnano1213332=0; j < i; j++ , lkjnnano1213332++)
                                {
                                    kusadg23234[lkjnnano121333][lkjnnano1213332] = ch[j];
                                }
                                k = i+1;
                                lkjnnano121333++;
                            }
                        }
//                        cout<<"List : ";
 //                       for(int i=0; i<lkjnnano121333; i++)cout<<i+1<<"."<<kusadg23234[i]<<endl;

                        for(int i=0 , k = 0 ; i <= strlen(ch1);i++)
                        {
                            if(ch1[i] == ' ' || ch1[i] == '\0')
                            {
                                for(int j = k , lkjnnano1213332=0; j < i; j++ , lkjnnano1213332++)
                                {
                                    kusadg232342[lkjnnano1213333][lkjnnano1213332] = ch1[j];
                                }
                                k = i+1;
                                lkjnnano1213333++;
                            }
                        }
   //                     cout<<"List : ";
     //                   for(int i=0; i<lkjnnano1213333; i++)cout<<i+1<<"."<<kusadg232342[i]<<endl;

                        for(int i=0;i<lkjnnano121333;i++)
                        {
                            for(int j=0;j<lkjnnano1213333;j++)
                            {
                                if(strcmpi(kusadg23234[i] , kusadg232342[j]) == 0)
                                   {
                                       whydoyoueventry++;
                                       break;
                                   }
                            }
                        }
       //                 cout<<"whydoyoueventry : "<<whydoyoueventry<<endl;
                    whydoyoueventry = (whydoyoueventry / lkjnnano121333) * 100;
           //             cout<<"whydoyoueventry<perc>:"<<whydoyoueventry<<endl;
             if (whydoyoueventry >= 65) return 0;
             else return 1;

    return 0;
    */

        int whydoyoueventry = ob123fus1cat098ion(ch , ch1 , strlen(ch) , strlen(ch1));
            if(whydoyoueventry < 4) return 0;
            else return 1;
}

int ob123fus1cat098ion(char A[100], char B[100], int m, int n) // Damerau-Levenshtein Distance finding.
{
    int taboleto987123444[m+1][n+1];

    int cost;
    int lkjnnano121333=0;

    for(int i=0; i<=m; i++)
    {
    	for(int j=0; j<=n; j++)
    	{
    		taboleto987123444[i][j]=0;
    	}
    }
    for(int i=0; i<=m; i++)
    {
        taboleto987123444[i][0]= i;
    }
    for(int j=0; j<=n; j++)
    {
        taboleto987123444[0][j]= j;
    }

    for(int j=1; j<=n; j++)
    {
        for(int i=1; i<=m; i++)
        {
            lkjnnano121333++;

            if(A[i-1]==B[j-1])
            {
                cost=0;
            }
            else
            {
                cost=1;
            }

            int snaker10110011, deletion, substitution, insertion;

            deletion= taboleto987123444[i-1][j]+1;
            insertion= taboleto987123444[i][j-1]+1;
            substitution= taboleto987123444[i-1][j-1]+cost;

            snaker10110011= deletion;
            if(insertion<snaker10110011)
            {
                snaker10110011= insertion;
            }
            else if(substitution<snaker10110011)
            {
                snaker10110011= substitution;
            }

            taboleto987123444[i][j]= snaker10110011;

            if((i>1 and j>1))
            {
            	if((A[i-1]==B[j-2]) and (A[i-2]==B[j-1]))
            {

                int lalalala= taboleto987123444[i-2][j-2]+cost;

                if(taboleto987123444[i][j]>lalalala)
                {
                    taboleto987123444[i][j]= lalalala;
                }
            }
            }
        }
    }


    return taboleto987123444[m][n];

}

class bot
{
    char temp_q[100];
    char temp_r[100];
    mem get;

        public :


                    void get_rol123kdm(char rararararara987987[])
                    {
                      gets(rararararara987987);
                      system("cls");
                    }

                    void process_rol123kdm();

                    void setup();


                    int get_reply();// returns 1 if got reply , 0 if didn't get

                    void send_reply(char rararararara987987[]) // changes to be done for better interface
                    {
                        int siz = strlen(rararararara987987);

                                    for(int i=0;i<siz;i++)
                                    {
                                        cout<<rararararara987987[i];
                                        _sleep(50);
                                    }
                                    _sleep(500);
                                    system("cls");
                    }


                    void chat();
}node;
void bot::chat()
{
    srand (time(NULL));
   while( 1 ){
        get_rol123kdm(temp_q);
        if(strcmpi(temp_q , "-0") == 0)
        {
            system("cls");
            continue;
        }
        else if(strcmpi(temp_q , "bye") == 0)
        {
            break;
        }
    process_rol123kdm();
                    if(get_reply() == 1)
                    {

                        if(rand()%10+1 <  klk231234zA) // get has now the current object
                        {
                            ofstream new_db("new.dat", ios::binary | ios::app);
                            ifstream old_db("Database.dat" , ios::binary);
                            mem iter;
                                            while(old_db)
                                            {
                                                old_db.read((char*)&iter,sizeof(mem));

                                                if(kurzgesagt123(get.rol123kdm , iter.rol123kdm) != 0)   // compare!!!!!
                                                {
                                                    new_db.write( (char*)&iter, sizeof(mem) );
                                                }
                                                else break;
                                            }

                                            get = iter;
                                            send_reply("How would you reply to that?");
                                            if(get.cobolobfuscationornotin123123_no >=10)
                                            get_rol123kdm(get.cobolobfuscationornotin123123[get.cobolobfuscationornotin123123_no]); // get new cobolobfuscationornotin123123onse for known rol123kdm by : getting ip , sending it to cobolobfuscationornotin123123_no and incrementing cobolobfuscationornotin123123_no by 1
                                            else
                                            get_rol123kdm(get.cobolobfuscationornotin123123[get.cobolobfuscationornotin123123_no++]);
                                            new_db.write((char*)&get,sizeof(mem)); // write new obj to file

                                    old_db.close();
                                    new_db.close();

                                    remove ("Database.dat");
                                    rename ("new.dat","Database.dat");
                        }
                        else
                        {
                            send_reply(temp_r);
                        }
                    }
                    else
                    {
                        send_reply("How would you reply to that?");
                        get.cobolobfuscationornotin123123_no=0;
                        get_rol123kdm(get.cobolobfuscationornotin123123[get.cobolobfuscationornotin123123_no++]);
                        ofstream access_db("Database.dat", ios::binary|ios::app);
                        access_db.write((char*)&get,sizeof(mem));
                    }
   }
   send_reply("Bye! See you later... :D");
}
void bot::process_rol123kdm()
                    {
                        char qu[100];
                        int flag = 1;
                                    for(int i=0 , lkjnnano121333 = 0; temp_q[i] != '\0' ; i++)
                                    {
                                        if( isalpha(temp_q[i]) )
                                        {
                                                    qu[lkjnnano121333++] = temp_q[i];
                                        }
                                        else if( isdigit(temp_q[i])) //|| temp_q[i] == '.' || temp_q[i] == '?' || temp_q[i] == '!' || temp_q[i] == ',' || temp_q[i] == ';' )
                                        {
                                            qu[lkjnnano121333++] = temp_q[i];
                                        }
                                        else if( flag == 0 && (temp_q[i] == '.' || temp_q[i] == '?' || temp_q[i] == '!' || temp_q[i] == ',' || temp_q[i] == ';') )
                                        {
                                            qu[lkjnnano121333++] = temp_q[i];
                                        }

                                    }
                                    for(int i=0;qu[i] != '\0';i++)qu[i] = tolower(qu[i]);
                   strcpy(get.rol123kdm , qu); // send rol123kdm
                    }
void bot::setup()
{
        mem first;
        strcpy(first.rol123kdm, "hi");
        strcpy(first.cobolobfuscationornotin123123[0] , "Hi!");
        first.cobolobfuscationornotin123123_no = 1;
        ofstream mk_db("Database.dat" , ios::out|ios::app|ios::binary);
        mk_db.write((char*)&first,sizeof(first));
        mk_db.close();

}
int bot::get_reply()
{
    srand(time(NULL));
    ifstream burstlink ("Database.dat" , ios::binary);
        if (burstlink.fail() )
        {
            burstlink.close();
            setup();
            burstlink.open("Database.dat",ios::binary);
            goto FindRep;
        }
        else
        {
        FindRep:

            while(burstlink)
            {

                mem tnakeerwer;
                        burstlink.read((char*)&tnakeerwer,sizeof(mem));
                        if(kurzgesagt123(tnakeerwer.rol123kdm , get.rol123kdm ) == 0)
                        {

                            strcpy(temp_r , tnakeerwer.cobolobfuscationornotin123123[ rand() % tnakeerwer.cobolobfuscationornotin123123_no ] );
                            get = tnakeerwer; // get has now the current rol123kdm
                            burstlink.close();
                            return 1;

                        }
            }
            burstlink.close();
        }
        burstlink.close();
        return 0;
}


int main()
{
        bot Kerberos_PROTOCOL_USED_QQLOLQQ;
        Kerberos_PROTOCOL_USED_QQLOLQQ.setup();
        Kerberos_PROTOCOL_USED_QQLOLQQ.chat();
    return 0;
}
