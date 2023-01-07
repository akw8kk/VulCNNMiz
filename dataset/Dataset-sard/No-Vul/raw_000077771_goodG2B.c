static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        char VAR2[100*2];
        memset(VAR2, '', 100*2-1); 
        VAR2[100*2-1] = ''; 
        
        strcpy(VAR2, VAR1);
        FUN3(VAR2);
        
    }
}