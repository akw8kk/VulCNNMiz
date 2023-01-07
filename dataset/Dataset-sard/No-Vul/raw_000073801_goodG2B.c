static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char * VAR4 = (char *)FUN2(100*sizeof(char));
    memset(VAR4, '', 100-1);
    VAR4[100-1] = '';
    {
        char * VAR1 = *VAR2;
        
        VAR1 = VAR4;
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            size_t VAR5;
            char VAR6[100];
            memset(VAR6, '', 100-1); 
            VAR6[100-1] = ''; 
            
            for (VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR1[VAR5] = VAR6[VAR5];
            }
            
            VAR1[100-1] = '';
            FUN3(VAR1);
        }
    }
}