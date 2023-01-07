void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        char VAR2[100];
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
        
        FUN3(VAR1, 100, "", VAR2);
        FUN4(VAR1);
        free(VAR1);
    }
}