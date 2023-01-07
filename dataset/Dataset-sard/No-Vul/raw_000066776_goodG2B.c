static void FUN1()
{
    char * VAR1;
    char * VAR2[5];
    char VAR3[50];
    char VAR4[100];
    
    VAR1 = VAR4;
    VAR1[0] = ''; 
    VAR2[2] = VAR1;
    FUN2(VAR2);
}