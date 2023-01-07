void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char * VAR4 = (char *)FUN2(100*sizeof(char));
    memset(VAR4, '', 100-1);
    VAR4[100-1] = '';
    {
        char * VAR1 = *VAR2;
        
        VAR1 = VAR4 - 8;
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            char VAR5[100];
            memset(VAR5, '', 100-1); 
            VAR5[100-1] = ''; 
            
            strncpy(VAR5, VAR1, strlen(VAR5));
            
            VAR5[100-1] = '';
            FUN3(VAR5);
        }
    }
}