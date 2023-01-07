static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2((10)*sizeof(char));
    char * VAR3 = (char *)FUN2((10+1)*sizeof(char));
    if(VAR4==5)
    {
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
    }
    {
        char VAR5[10+1] = VAR6;
        size_t VAR7, VAR8;
        VAR8 = strlen(VAR5);
        
        
        for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
        {
            VAR1[VAR7] = VAR5[VAR7];
        }
        FUN3(VAR1);
    }
}