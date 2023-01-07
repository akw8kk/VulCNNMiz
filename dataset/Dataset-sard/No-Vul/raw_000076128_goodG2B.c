static void FUN1()
{
    char * VAR1;
    char * VAR2[5];
    char VAR3[50];
    char VAR4[100];
    memset(VAR3, '', 50-1); 
    VAR3[50-1] = ''; 
    memset(VAR4, '', 100-1); 
    VAR4[100-1] = ''; 
    
    VAR1 = VAR4;
    VAR2[2] = VAR1;
    FUN2(VAR2);
}