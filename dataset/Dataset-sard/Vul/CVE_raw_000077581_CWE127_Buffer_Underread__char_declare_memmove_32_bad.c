void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char VAR4[100];
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
            
            memmove(VAR5, VAR1, 100*sizeof(char));
            
            VAR5[100-1] = '';
            FUN2(VAR5);
        }
    }
}