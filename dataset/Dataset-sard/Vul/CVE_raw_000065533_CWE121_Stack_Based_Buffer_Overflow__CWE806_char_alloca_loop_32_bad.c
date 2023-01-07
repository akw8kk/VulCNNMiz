void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char * VAR4 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR4;
    {
        char * VAR1 = *VAR2;
        
        memset(VAR1, '', 100-1); 
        VAR1[100-1] = ''; 
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            char VAR5[50] = "";
            size_t VAR6, VAR7;
            VAR7 = strlen(VAR1);
            
            for (VAR6 = 0; VAR6 < VAR7; VAR6++)
            {
                VAR5[VAR6] = VAR1[VAR6];
            }
            VAR5[50-1] = ''; 
            FUN3(VAR1);
        }
    }
}