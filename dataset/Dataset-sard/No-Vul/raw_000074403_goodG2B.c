static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        char * VAR1 = *VAR2;
        {
            char * VAR4 = (char *)malloc(100*sizeof(char));
            memset(VAR4, '', 100-1);
            VAR4[100-1] = '';
            
            VAR1 = VAR4;
        }
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            char VAR5[100];
            memset(VAR5, '', 100-1); 
            VAR5[100-1] = ''; 
            
            memmove(VAR1, VAR5, 100*sizeof(char));
            
            VAR1[100-1] = '';
            FUN2(VAR1);
            
        }
    }
}