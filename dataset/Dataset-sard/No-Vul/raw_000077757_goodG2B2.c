static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    VAR2 = 1; 
    VAR1 = FUN2(VAR1);
    {
        char VAR3[100*2];
        memset(VAR3, '', 100*2-1); 
        VAR3[100*2-1] = ''; 
        
        strcpy(VAR3, VAR1);
        FUN3(VAR3);
        
    }
}