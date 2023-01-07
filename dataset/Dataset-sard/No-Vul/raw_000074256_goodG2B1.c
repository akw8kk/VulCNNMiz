static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    VAR2 = 0; 
    VAR1 = FUN2(VAR1);
    {
        char VAR3[100];
        memset(VAR3, '', 100-1); 
        VAR3[100-1] = ''; 
        
        strcpy(VAR1, VAR3);
        FUN3(VAR1);
        
    }
}