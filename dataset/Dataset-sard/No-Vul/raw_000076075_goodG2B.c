static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char * VAR4 = (char *)FUN2(50*sizeof(char));
    char * VAR5 = (char *)FUN2(100*sizeof(char));
    memset(VAR4, '', 50-1); 
    VAR4[50-1] = ''; 
    memset(VAR5, '', 100-1); 
    VAR5[100-1] = ''; 
    {
        char * VAR1 = *VAR2;
        
        VAR1 = VAR5;
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            char VAR6[100];
            memset(VAR6, '', 100-1);
            VAR6[100-1] = ''; 
            
            memmove(VAR6, VAR1, strlen(VAR6)*sizeof(char));
            VAR6[100-1] = '';
            FUN3(VAR6);
        }
    }
}