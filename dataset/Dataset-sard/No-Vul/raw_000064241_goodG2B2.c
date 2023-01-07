static void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    if(VAR4)
    {
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
    }
    {
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        
        strncpy(VAR1, VAR5, 100-1);
        VAR1[100-1] = ''; 
        FUN2(VAR1);
    }
}