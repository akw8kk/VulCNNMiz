static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char * VAR4 = (char *)FUN2((10)*sizeof(char));
    char * VAR5 = (char *)FUN2((10+1)*sizeof(char));
    {
        char * VAR1 = *VAR2;
        
        VAR1 = VAR5;
        VAR1[0] = ''; 
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        {
            char VAR6[10+1] = VAR7;
            size_t VAR8, VAR9;
            VAR9 = strlen(VAR6);
            
            
            for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
            {
                VAR1[VAR8] = VAR6[VAR8];
            }
            FUN3(VAR1);
        }
    }
}