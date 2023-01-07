static void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    memset(VAR2, '', 50-1); 
    VAR2[50-1] = ''; 
    memset(VAR3, '', 100-1); 
    VAR3[100-1] = ''; 
    
    VAR1 = VAR3;
    FUN2(VAR1);
}