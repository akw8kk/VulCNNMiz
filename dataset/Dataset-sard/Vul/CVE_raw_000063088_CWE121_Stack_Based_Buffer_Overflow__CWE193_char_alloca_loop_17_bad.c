void FUN1()
{
    int VAR1;
    char * VAR2;
    char * VAR3 = (char *)FUN2((10)*sizeof(char));
    char * VAR4 = (char *)FUN2((10+1)*sizeof(char));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
        VAR2[0] = ''; 
    }
    {
        char VAR5[10+1] = VAR6;
        size_t VAR1, VAR7;
        VAR7 = strlen(VAR5);
        
        
        for (VAR1 = 0; VAR1 < VAR7 + 1; VAR1++)
        {
            VAR2[VAR1] = VAR5[VAR1];
        }
        FUN3(VAR2);
    }
}