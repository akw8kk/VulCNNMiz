static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2((10)*sizeof(char));
    char * VAR3 = (char *)FUN2((10+1)*sizeof(char));
    if(FUN3())
    {
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
    }
    else
    {
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
    }
    {
        char VAR4[10+1] = VAR5;
        size_t VAR6, VAR7;
        VAR7 = strlen(VAR4);
        
        
        for (VAR6 = 0; VAR6 < VAR7 + 1; VAR6++)
        {
            VAR1[VAR6] = VAR4[VAR6];
        }
        FUN4(VAR1);
    }
}