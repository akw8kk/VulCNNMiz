static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        char VAR2[100];
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
        
        memmove(VAR1, VAR2, 100*sizeof(char));
        
        VAR1[100-1] = '';
        FUN3(VAR1);
        
    }
}